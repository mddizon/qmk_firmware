#ifndef REV4_CONFIG_H
#define REV4_CONFIG_H

#include "config_common.h"

#define DEVICE_VER 0x0004

// This planck suffers from a bad column, like some others:
// https://www.reddit.com/r/olkb/comments/7wvok6/eotw_planck_kit_entire_column_not_working/
// This change is to map COL8 from pin D4 to pin D3
// Flash using this command: planck/rev4-fix:default:dfu
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D3, D6, B4, D7 }

#endif
