/* Copyright 2019 Carlos Filoteo
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
#include "dactyl_64.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*

void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up

  matrix_init_user();
}

void matrix_scan_kb(void) {
  // put your looping keyboard code here
  // runs every cycle (a lot)

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  // put your per-action keyboard code here
  // runs for every action, just before processing by the firmware

  return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
  // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

  led_set_user(usb_led);
}

*/

led_config_t g_led_config = { \
    { \
        {   0,   1,   2,   3,   4,   5 }, \
        {  11,  10,   9,   8,   7,   6 }, \
        {  12,  13,  14,  15,  16,  17 }, \
        {  18,  19,  20,  21,  22,  23 }, \
        {  NO_LED,NO_LED, 24,  25,  26,  27 }, \
        {  NO_LED,NO_LED, 28,  29,  30,  31 }, \
        { 32, 33, 34, 35, 36, 37 }, \
        { 38, 39, 40, 41, 42, 43 }, \
        { 44, 45, 46, 47, 48, 49 }, \
        { 50, 51, 52, 53, 54, 55 }, \
        { 56, 57, 58, 59, NO_LED,NO_LED }, \
        { 60, 61, 62, 63, NO_LED,NO_LED } \
    }, { \
  // LED Index to Physical Position
    {0, 0},{45, 0},{90, 0},{134, 0},{179, 0},{224, 0},
    {0, 6},{45, 6},{90, 6},{134, 6},{179, 6},{224, 6},
    {0, 12},{45, 12},{90, 12},{134, 12},{179, 12},{224, 12},
    {0, 17},{45, 17},{90, 17},{134, 17},{179, 17},{224, 17},
                     {90, 23},{134, 23},{179, 23},{224, 23},
                     {90, 29},{134, 29},{179, 29},{224, 29},
    {0, 35},{45, 35},{90, 35},{134, 35},{179, 35},{224, 35},
    {0, 41},{45, 41},{90, 41},{134, 41},{179, 41},{224, 41},
    {0, 47},{45, 47},{90, 47},{134, 47},{179, 47},{224, 47},
    {0, 52},{45, 52},{90, 52},{134, 52},{179, 52},{224, 52},
    {0, 58},{45, 58},{90, 58},{134, 58},
    {0, 64},{45, 64},{90, 64},{134, 64}
}, { \
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, \
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, \
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, \
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, \
        4, 4, 4, 4, 4, 4, 4, 4, \
        4, 4, 4, 4, 4, 4, 4, 4 \
} };
