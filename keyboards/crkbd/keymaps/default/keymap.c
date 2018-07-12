#include "crkbd.h"
#include "bootloader.h"
#include "action_layer.h"
#include "action_util.h"
#include "eeconfig.h"
#ifdef PROTOCOL_LUFA
#include "lufa.h"
#include "split_util.h"
#endif
#include "LUFA/Drivers/Peripheral/TWI.h"
#ifdef SSD1306OLED
  #include "ssd1306.h"
#endif

#include "../lib/mode_icon_reader.c"
#include "../lib/layer_state_reader.c"
#include "../lib/host_led_state_reader.c"
#include "../lib/logo_reader.c"
#include "../lib/keylogger.c"
#include "../lib/timelogger.c"

extern keymap_config_t keymap_config;

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

#define _QWERTY 0
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  BACKLIT,
  RGBRST
};

#define _______ KC_TRNS
#define ___X___ KC_NO

#define CTLTB CTL_T(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( \
  //,-----------------------------------------------.                   ,-----------------------------------------------.
     KC_ESC ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                     KC_Y  ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSPC, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
    CTLTB   ,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                     KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
    KC_LSFT ,KC_Z   ,KC_X   , KC_C  , KC_V  , KC_B  ,                     KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT, \
  //|-------+-------+-------+-------+-------+-------+--------|  |-------+-------+-------+-------+-------+-------+-------|
                                     KC_LGUI, LOWER ,KC_SPC,     KC_ENT , RAISE , KC_ALT \
                                  //'------------------------'  '-----------------------'
  ),

  [_LOWER] = LAYOUT( \
  //,-----------------------------------------------.                   ,-----------------------------------------------.
     _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                     KC_6  ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,_______, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
     _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                     KC_F6 , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,_______, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
     _______,KC_F11 ,KC_F12 , KC_F13, KC_F14, KC_F15,                     KC_F16, KC_F17,KC_F18 ,KC_F19 ,KC_F20 ,_______, \
  //|-------+-------+-------+-------+-------+-------+--------|  |-------+-------+-------+-------+-------+-------+-------|
                                     _______,_______,_______,    _______,_______,_______ \
                                  //'------------------------'  '-----------------------'
  ),

  [_RAISE] = LAYOUT( \
  //,-----------------------------------------------.                   ,-----------------------------------------------.
     _______,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                    KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,_______,                    KC_MINS, KC_EQL,KC_LCBR,KC_RCBR,KC_PIPE,KC_GRV , \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
    KC_LSFT ,KC_Z   ,KC_X   , KC_C  , KC_V  , KC_B  ,                     KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT, \
  //|-------+-------+-------+-------+-------+-------+--------|  |-------+-------+-------+-------+-------+-------+-------|
                                     _______,_______,_______,    _______,_______,_______ \
                                  //'------------------------'  '-----------------------'
  ),

  [_ADJUST] = LAYOUT( \
  //,-----------------------------------------------.                   ,-----------------------------------------------.
     RESET  ,RGBRST ,_______,_______,_______,_______,                    _______,_______,_______,_______,_______,_______, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
     RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,_______,_______,                    _______,_______,_______,_______,_______,_______, \
  //|-------+-------+-------+-------+-------+-------|                   |-------+-------+-------+-------+-------+-------|
     RGB_MOD,RGB_HUD,RGB_SAD,RGB_VAD,_______,_______,                    _______,_______,_______,_______,_______,_______, \
  //|-------+-------+-------+-------+-------+-------+--------|  |-------+-------+-------+-------+-------+-------+-------|
                                     _______,_______,_______,    _______,_______,_______ \
                                  //'------------------------'  '-----------------------'
  )
};

int RGB_current_mode;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        TWI_Init(TWI_BIT_PRESCALE_1, TWI_BITLENGTH_FROM_FREQ(1, 800000));
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

void matrix_scan_user(void) {
   iota_gfx_task();
}

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
    set_timelog();
  }

  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
        if (record->event.pressed) {
          layer_on(_ADJUST);
        } else {
          layer_off(_ADJUST);
        }
        return false;
        break;
    case RGB_MOD:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          rgblight_mode(RGB_current_mode);
          rgblight_step();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      return false;
      break;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          eeconfig_update_rgblight_default();
          rgblight_enable();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      break;
  }
  return true;
}

#endif
