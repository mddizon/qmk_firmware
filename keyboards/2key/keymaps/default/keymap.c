#include "2key.h"

// Tap Dance Declarations
enum {
  LEFT_UP,
  RIGHT_DOWN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * -----------------
 * |   1   |   2   |
 * --------+--------
 */
  {{KC_A, KC_B}}
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [LEFT_UP] = ACTION_TAP_DANCE_DOUBLE(KC_LEFT, KC_UP),
  [RIGHT_DOWN] = ACTION_TAP_DANCE_DOUBLE(KC_RIGHT, KC_DOWN)
};

void matrix_init_user(void) {
}