/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6062
#define DEVICE_VER      0x0001
#define MANUFACTURER    Profet
#define PRODUCT         Atreus62
#define DESCRIPTION     q.m.k. keyboard firmware for Atreus62

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { D2, D3, D1, D0, D4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, B5, B4, E6, D7, C6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
#define DEBOUNCE 5

#define RGB_DI_PIN F0
#define RGBLED_NUM 14

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define B7_AUDIO
#define STARTUP_SONG SONG(MARIO_THEME)

#endif
