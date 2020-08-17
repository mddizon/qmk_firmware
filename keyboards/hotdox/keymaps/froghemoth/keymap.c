#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define NUM 1 // Numberpad
#define MDIA 2 // Mouse / Direction
#define SYM 3 // Symbols

// DWM Switch screens 
#define SCRNLFT G(KC_COMM)
#define SCRNRGT G(KC_DOT)
#define SCRN_ML SGUI(KC_COMM)
#define SCRN_MR SGUI(KC_DOT)

// Tab Navigation
#define NXT_TAB LCTL(KC_TAB)
#define PRV_TAB C_S_T(KC_TAB)

// Mod home row keys
#define MD_A LT(1, KC_A)
#define MD_Z LT(2, KC_Z)
#define MD_V LT(3, KC_V)
#define MD_S LCTL_T(KC_S)
#define MD_D LALT_T(KC_D)
#define MD_F LSFT_T(KC_F)
#define MD_G LGUI_T(KC_G)

#define MD_s LT(1, KC_SCLN)
#define MD_q LT(2, KC_SLSH)
#define MD_M LT(3, KC_M)
#define MD_L LCTL_T(KC_L)
#define MD_K LALT_T(KC_K)
#define MD_J LSFT_T(KC_J)
#define MD_H LGUI_T(KC_H)

// Whyyyy
#define SHFTENT KC_SFTENT

enum custom_keycodes {
  VRSN = SAFE_RANGE,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ~    |   !  |   @  |   #  |   $  |   %  | GUI+,|           | GUI+.|   ^  |   &  |   *  |   (  |   )  | Bksp   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  (   |           |  )   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Esc    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  [   |           |  ]   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  L2  |  -   |  _   | BKSP | GUI  |                                       |  GUI | DEL  |   =  |   +  |  L2  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | VOLD | VOLU |       | PREV | NEXT |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | L1   |       | L1   |      |      |
 *                                 | Space|Backsp|------|       |------|  Tab |Enter |
 *                                 |      |ace   | ESC  |       | ESC  |      |      |
 *                                 `--------------------'       `--------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
// Change symbols back to numbers
// Add ctrl, shift, alt, try doing that on sdf and jkl
// create different modes for the other thumb keys since i will probably never use them
// perhaps one for mouse, one for window and tab management
// find a better place to put plus and minus, perhaps use the symbol layer

[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_GRV ,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  SCRN_ML,
        KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_LPRN,
        KC_ESC ,  MD_A   ,  MD_S   ,  MD_D   ,  MD_F   ,  MD_G   ,
        KC_LSFT,  MD_Z   ,  KC_X   ,  KC_C   ,  MD_V   ,  KC_B   ,  KC_LBRC,
        MO(2)  ,  KC_MINS,  KC_UNDS,  KC_BSPC,  KC_LGUI,
                                                SCRNLFT,  SCRNRGT,
                                                                    MO(1)  ,
                                                KC_SPC ,  KC_BSPC,  KC_ESC ,
        // right hand
        SCRN_MR,  KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  KC_BSPC,
        KC_RPRN,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  KC_BSLS,
                  MD_H   ,  MD_J   ,  MD_K   ,  MD_L   ,  MD_s   ,  KC_QUOT,
        KC_RBRC,  KC_N   ,  MD_M   ,  KC_COMM,  KC_DOT ,  MD_q   ,  SHFTENT,
                            KC_RGUI,  KC_DEL ,  KC_EQL ,  KC_PLUS,  MO(2)  ,
        PRV_TAB,  NXT_TAB,
        MO(1)  ,
        KC_ESC ,  KC_SPC ,  KC_ENT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |Version  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 * | EEP_RST  |      |      |      |      |                                       |      |    . |   0  |   =  |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |Animat|      |       |Toggle|Solid |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |Bright|Bright|      |       |      |Hue-  |Hue+  |
 *                                 |ness- |ness+ |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[NUM] = LAYOUT_ergodox(
       // left hand
       VRSN   ,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  KC_F5  ,  _______,
       _______,  _______,  KC_UNDS,  KC_LCBR,  KC_RCBR,  KC_MINS,  _______,
       _______,  _______,  KC_PLUS,  KC_LPRN,  KC_RPRN,  KC_EQL ,
       _______,  _______,  _______,  KC_LBRC,  KC_RBRC,  KC_PIPE,  _______,
       _______,  _______,  _______,  _______,  _______,
                                               _______,  _______,
                                                                   _______,
                                               _______,  _______,  _______,
       // right hand
       _______,  KC_F6  ,  KC_F7  ,  KC_F8  ,  KC_F9  ,  KC_F10 ,  KC_F11 ,
       _______,  _______,  KC_7   ,  KC_8   ,  KC_9   ,  _______,  KC_F12 ,
                 _______,  KC_4   ,  KC_5   ,  KC_6   ,  _______,  _______,
       _______,  _______,  KC_1   ,  KC_2   ,  KC_3   ,  _______,  _______,
                           _______,  KC_0   ,  KC_DOT ,  _______,  _______,
       _______,  _______,
       _______,
       _______,  _______,  _______
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[MDIA] = LAYOUT_ergodox(
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       _______,  _______,  _______,  KC_MS_U,  _______,  _______,  _______,
       _______,  _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       _______,  _______,  _______,  KC_BTN1,  KC_BTN2,
                                               _______,  _______,
                                                                   _______,
                                               _______,  _______,  _______,
    // right hand
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
                 KC_LEFT,  KC_DOWN,  KC_UP  ,  KC_RGHT,  _______,  KC_MPLY,
       _______,  _______,  _______,  KC_MPRV,  KC_MNXT,  _______,  _______,
                           KC_VOLU,  KC_VOLD,  KC_MUTE,  _______,  _______,
       _______,  _______,
       _______,
       _______,  KC_BTN2,  KC_BTN1
),

[SYM] = LAYOUT_ergodox(
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       KC_TILD,  _______,  _______,  _______,  _______,  _______,  _______,
       KC_GRV ,  KC_EXLM,  KC_AT  ,  KC_HASH,  KC_DLR ,  KC_PERC,
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       _______,  _______,  _______,  _______,  _______,
                                               _______,  _______,
                                                                   _______,
                                               _______,  _______,  _______,
    // right hand
       _______,  _______,  _______,  _______,  _______,  _______,  _______,
       _______,  _______,  _______,  _______,  KC_LCBR,  KC_RCBR,  _______,
                 KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,
       _______,  _______,  _______,  _______,  KC_LBRC,  KC_LBRC,  _______,
                           _______,  _______,  _______,  _______,  _______,
       _______,  _______,
       _______,
       _______,  _______,  _______
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }
};
