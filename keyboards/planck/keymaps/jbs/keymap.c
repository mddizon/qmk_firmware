#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Edited the number row as well as symbols on shifted number keys and changed the layout
// to a ten key setup. 14AUG2018 JBS

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define LOCK LGUI(LCTL(KC_Q))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |LKScrn| Ctrl | Optn | Cmd  |Lower |Space |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12( \
 KC_ESC,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPC, \
 KC_TAB,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT, \
 KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_ENT, \
 LOCK,KC_LCTL,KC_LALT,KC_LGUI,LOWER,KC_SPC,KC_SPC,RAISE,KC_LEFT,KC_DOWN,KC_UP,KC_RGHT \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |      |      |      |      |   1  |   2  |   3  |   _  |   [  |   ]  |Reset |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |   4  |   5  |   6  |   =  |      |      |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |   7  |   8  |   9  | Prev | Next | P/P  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |ScrLK |      |      |      |Lower |   0  |   0  |      | Mute | Vol- | Vol+ |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12( \
  KC_GRV,KC_NO,KC_NO,KC_NO,KC_NO,KC_1,KC_2,KC_3,KC_UNDERSCORE,KC_LBRACKET,KC_RBRACKET,RESET, \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_4,KC_5,KC_6,KC_EQUAL,KC_NO,KC_NO,KC_BSLASH, \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_7,KC_8,KC_9,KC_MPRV,KC_MNXT,KC_MPLY, \
  KC_SLCK,KC_NO,KC_NO,KC_NO,KC_TRNS,KC_0,KC_0,KC_NO,KC_MUTE,KC_VOLD,KC_VOLU,KC_NO \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  ~   |  F1  |  F2  |  F3  |  F4  |   !  |   @  |   #  |   -  |   {  |   }  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |   $  |   %  |   ^  |   +  |      |      |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |   &  |   *  |   (  | Brt- | Brt+ |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Caps |      |      |      |      |   )  |   )  |Raise | Home | PgDN | PgUP | End  |
 * `-----------------------------------------------------------------------------------'
 */
 [_RAISE] = LAYOUT_ortho_4x12( \
  KC_TILD,KC_F1,KC_F2,KC_F3,KC_F4,KC_EXCLAIM,KC_AT,KC_HASH,KC_MINUS,KC_LEFT_CURLY_BRACE,KC_RIGHT_CURLY_BRACE,KC_DEL, \
  KC_NO,KC_F5,KC_F6,KC_F7,KC_F8,KC_DOLLAR,KC_PERCENT,KC_CIRCUMFLEX,KC_PLUS,KC_NO,KC_NO,KC_PIPE, \
  KC_NO,KC_F9,KC_F10,KC_F11,KC_F12,KC_AMPERSAND,KC_ASTERISK,KC_LEFT_PAREN,BL_DEC,BL_INC,KC_NO,KC_NO, \
  KC_CAPSLOCK,KC_NO,KC_NO,KC_NO,KC_NO,KC_RIGHT_PAREN,KC_RIGHT_PAREN,KC_TRNS,KC_HOME,KC_PGDN,KC_PGUP,KC_END \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      | BL - | BL + |BL TOG|
 * `-----------------------------------------------------------------------------------'
 */

[_ADJUST] =  LAYOUT_ortho_4x12( \
  _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
  _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______, _______, _______, _______, _______, \
  _______, _______, _______, BL_TOGG, BL_DEC , BL_INC , _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC , BL_INC , BL_TOGG \
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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
