/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#include QMK_KEYBOARD_H

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PSCR, KC_SLCK, KC_PAUS,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_INS,  KC_HOME, KC_PGUP,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_CAPS, KC_END,  KC_PGDN,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_UP,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_LEFT,      KC_RGHT,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_NO,   KC_NO,   KC_LCTL, KC_LGUI, KC_LALT, LOWER, KC_BSPC,   KC_DOWN,   KC_SPC,  RAISE,   KC_NO,   KC_RALT, KC_RGUI, KC_RCTL, KC_NO
  ),
  [_LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    KC_TILD, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, KC_MINS, KC_EQL,  KC_DEL,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, KC_LBRC, KC_RBRC, _______,
    _______, _______, _______, _______, _______, _______,            _______,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______,     _______,      _______,     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,   _______,   _______, _______, _______, _______, _______, _______, _______
  ),
  [_RAISE] = LAYOUT(
    _______, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,            _______,            KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______, _______,
    _______, _______, _______, _______, _______, _______,     _______,      _______,     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,   _______,   _______, _______, _______, _______, _______, _______, _______
  ),
  [_ADJUST] = LAYOUT(
    RESET,   _______, _______, _______, _______, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______,   _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,     _______,      _______,     _______, _______, _______, _______, _______, _______,
    DEBUG,   _______, _______, _______, _______, _______, KC_DEL,    _______,   _______, _______, _______, _______, _______, _______, _______
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_COLEMAK);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_DVORAK);
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
