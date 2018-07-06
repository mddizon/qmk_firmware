// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "atreus62.h"

#define _______ KC_TRNS
#define ___X___ KC_NO

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, ___X___, KC_Z,    KC_X,    KC_C,    KC_V,                     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
  ___X___, ___X___, KC_LCTL, KC_LALT, LOWER,   KC_LGUI, KC_BSPC, KC_SPC, KC_ENT,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, KC_MINS, KC_EQL,  KC_DEL ,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, KC_LBRC, KC_RBRC, _______,
  _______, _______, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                    KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,
  _______, _______, _______, _______, KC_WBAK, KC_WFWD,                   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT(
  RESET,   DEBUG,   ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
  ___X___, ___X___, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
  ___X___, ___X___, RGB_VAD, RGB_SAD, RGB_HUD, RGB_TOG,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
  ___X___, ___X___, ___X___, ___X___, _______, ___X___, _______, _______, ___X___, _______, ___X___, ___X___, ___X___, ___X___
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
