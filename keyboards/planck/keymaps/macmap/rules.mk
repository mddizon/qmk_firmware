RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
CONSOLE_ENABLE = no         # Console for debug(+3000)

SRC += muse.c
EXTRAFLAGS += -flto
