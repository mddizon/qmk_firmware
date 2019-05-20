
ifeq ($(strip $(RGB_MATRIX_SPLIT_RIGHT)), yes)
    OPT_DEFS += -DRGB_MATRIX_SPLIT_RIGHT
endif

SRC += rev1/matrix.c
SRC += rev1/split_util.c
SRC += rev1/split_scomm.c
