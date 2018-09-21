#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#ifdef AUDIO_ENABLE
    // #define STARTUP_SONG SONG(ZELDA_PUZZLE)
    #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DISABLE_LEADER

#endif
