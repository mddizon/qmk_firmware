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

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
	KC_NLCK, KC_SLSH, KC_ASTR , KC_MINS, KC_ESC , KC_1    , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_PGUP, \
	KC_7   , KC_8   , KC_9    ,                   KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN, \
	KC_4   , KC_5   , KC_6    , KC_PLUS,          KC_CAPS , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT , KC_INS , \
	KC_1   , KC_2   , KC_3    ,                   KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LSFT, KC_UP  , KC_DEL , \
	KC_0            , KC_DOT  , KC_ENT  ,         KC_LCTL , MO(1)  , KC_LALT,                   KC_SPC                   , KC_LALT, MO(1)  , KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT \
),
[1] = LAYOUT(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______,          _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, _______, KC_UP, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, RGB_SAI, RGB_SAD, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, \
	_______, _______, _______,          _______, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______, \
	_______, _______, _______, _______, _______, _______, KC_MPLY, _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT \
),
[2] = LAYOUT(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),
[3] = LAYOUT(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
