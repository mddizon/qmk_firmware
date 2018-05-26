// Below layout is based upon /u/That-Canadian's planck layout
#include "launchpad.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Layer names
#define _BASE 0
#define _FUNC 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

float song_1[][2] = SONG(MARIO_THEME);
float song_2[][2] = SONG(IMPERIAL_MARCH);
float song_3[][2] = SONG(E1M1_DOOM);
float song_4[][2] = SONG(DISNEY_SONG);

enum song_keycodes {
  SONG1 = SAFE_RANGE,
  SONG2,
  SONG3,
  SONG4,
  LOK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.
 * |   1  |  2   |
 * |------+------|
 * |   3  |  4   |
 * |------+------|
 * |   5  |  6   |
 * |------+------|
 * | FUNC |  8   |
 * `-------------'
 */
[_BASE] = LAYOUT( \
    KC_VOLU,  KC_VOLD, \
    KC_MPLY,  KC_MUTE, \
    KC_MFFD,  KC_MRWD, \
    LT(_FUNC, LOK), XXXXXXX \
),

/* Function
 * ,-------------.
 * |   Q  |CALDEL|
 * |------+------|
 * |   A  |TSKMGR|
 * |------+------|
 * |   Z  |  X   |
 * |------+------|
 * |      |  C   |
 * `-------------'
 */
[_FUNC] = LAYOUT( \
    RGB_TOG, RGB_MOD, \
    SONG1  , SONG2  , \
    SONG3  , SONG4  , \
    _______, XXXXXXX \
)

};

void matrix_init_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SONG1:
      if (record->event.pressed) {
        PLAY_SONG(song_1);
      }
      return false;
    case SONG2:
      if (record->event.pressed) {
        PLAY_SONG(song_2);
      }
      return false;
    case SONG3:
      if (record->event.pressed) {
        PLAY_SONG(song_3);
      }
      return false;
    case SONG4:
      if (record->event.pressed) {
        PLAY_SONG(song_4);
      }
      return false;
    case LOK:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI("l"));
      }
      return false;
    default:
      return true; // Process all other keycodes normally
  }
}
