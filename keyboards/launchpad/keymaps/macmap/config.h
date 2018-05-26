#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#ifdef AUDIO_ENABLE
  #define B6_AUDIO
  #define STARTUP_SONG SONG(ZELDA_PUZZLE)
  #define NO_MUSIC_MODE // Save space
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGB_DI_PIN F4  // The pin the LED strip is connected to
  #define RGBLED_NUM 8   // Number of LEDs in your strip
  #define RGBLIGHT_ANIMATIONS
#endif

#endif
