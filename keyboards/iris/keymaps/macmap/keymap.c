#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define TRNS KC_TRNS
#define ___ KC_TRNS
#define KC_RST RESET
#define KC_BL_S BL_STEP
#define Z_ALT MT(MOD_LALT, KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
    KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                   KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC ,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
    KC_ESC , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                   KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS ,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
    KC_TAB , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                   KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT ,
  //|------|-------|-------|-------|-------|-------|-------   -------|-------|-------|-------|-------|-------|-------|
    KC_LSFT,KC_LCTL, Z_ALT  , KC_X  , KC_C  , KC_V  ,KC_NO ,   KC_NO , KC_B  , KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
                                     LOWER ,KC_LGUI,KC_BSPC,   KC_SPC, KC_ENT, RAISE
  //                               .-------|-------/-----/     \-----|-------|-------.
  ),

  [_LOWER] = LAYOUT(
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
    KC_TILD,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,                    ___  ,  ___  ,  ___  ,KC_MINS, KC_EQL, KC_DEL,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,                    ___  ,  ___  ,  ___  ,KC_LBRC,KC_RBRC,  ___  ,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,                  KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,  ___  ,  ___  ,
  //|------|-------|-------|-------|-------|-------|-------   -------|-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,    ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
                                      ___  ,  ___  ,  ___  ,    ___  ,  ___  ,  ___
  //                               .-------|-------/-----/     \-----|-------|-------.
  ),

  [_RAISE] = LAYOUT(
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
     KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                   KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11, KC_F12,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,KC_F14 ,KC_F15 ,  ___  ,                  KC_MPRV,KC_MPLY,KC_MNXT,KC_MUTE,KC_VOLD,KC_VOLU,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,  ___  ,KC_WBAK,KC_WFWD,                  KC_HOME,KC_PGUP,KC_PGDN,KC_END ,  ___  ,  ___  ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
      ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,    ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
                                      ___  ,  ___  ,KC_DEL,     ___  ,  ___  ,  ___
  //                               .-------|-------/-----/     \-----|-------|-------.
  ),

  [_ADJUST] = LAYOUT(
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
     RESET , DEBUG ,  ___  ,  ___  ,  ___  ,  ___  ,                     ___ ,   ___ ,   ___ ,   ___ ,   ___ ,   ___ ,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,  ___  ,                     ___ ,   ___ ,   ___ ,   ___ ,  ___  ,   ___ ,
  //|------|-------|-------|-------|-------|-------.                 .-------|-------|-------|-------|-------|-------|
      ___  ,RGB_MOD,RGB_HUD,RGB_SAD,RGB_VAD,  ___  ,                     ___ ,   ___ ,   ___ ,   ___ ,  ___  ,   ___ ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
      ___  ,KC_ASTG,  ___  ,  ___  ,  ___  ,  ___  ,  ___  ,     ___ ,   ___ ,   ___ ,   ___ ,   ___ ,  ___  ,   ___ ,
  //|------|-------|-------|-------|-------|-------|------/   \------|-------|-------|-------|-------|-------|-------|
                                       ___ ,   ___ ,  ___ ,      ___ ,   ___ ,   ___
  //                               .-------|-------/-----/     \-----|-------|-------.
  )

};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2] = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
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
  }
  return true;
}
