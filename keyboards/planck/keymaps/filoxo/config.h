#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(COIN_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define BACKLIGHT_BREATHING

#define RGB_DI_PIN B3
#define RGBLED_NUM 12

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define NO_MUSIC_MODE
