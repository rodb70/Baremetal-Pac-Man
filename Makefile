# Makefile

CROSS_COMPILE := /opt/gcc-arm-none-eabi-6-2017-q1-update/bin/arm-none-eabi-

COMPILER := gcc
SHORT_ENUMS := n

#CPU := rpi1
CPU := host
BLD_TARGET := cpacman
BLD_TYPE := debug

CSRC += game.c
CSRC += ghost_ai.c
CSRC += main.c
CSRC += pacman.c
CSRC += print_number.c
CSRC += print_string.c
CSRC += render.c
CSRC += title_screen.c
CSRC += util.c

INC += .

ifeq ($(CPU),rpi1)
PROJ_DIRS := rpi1
endif
ifeq ($(CPU),host)
PROJ_DIRS := host
EXTRA_LIBS := -lSDL2
endif

include makefiles/main.mk

distclean:
	rm -rf build
