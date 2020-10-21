#ifndef FOOD_SPRITE_H

#define FOOD_SPRITE_H
#include <stdint.h>
uint16_t food[64] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t power_up[64] = {
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000
};

uint16_t blank_tile[64] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t cherry_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc408, 0xc408, 0xc408,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc408, 0xc408, 0xc408, 0xc408, 0xc408,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc408, 0xc408, 0xc408, 0xc408, 0xc408,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc408, 0xc408, 0xc408, 0x0000, 0xc408, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc408,
    0x0000, 0x0000, 0x0000, 0x0000, 0xc408, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc408, 0xc408, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc408, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc408, 0xc408, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc408, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc408, 0xc408, 0xc000,
    0x0000, 0x0000, 0x0000, 0xc408, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0x0000, 0xc000, 0xc000, 0xc408, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000, 0x0000,
    0xc000, 0xc000, 0xc000, 0xc408, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000, 0x0000,
    0xc000, 0xc000, 0xc000, 0xc408, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc000, 0xc618, 0xc618, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t strawberry_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x0600, 0x0600, 0x0600,
    0xc618, 0x0600, 0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x0600, 0x0600, 0x0600,
    0xc618, 0x0600, 0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0600,
    0x0600, 0x0600, 0x0600, 0xc618, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc618, 0xc618, 0xc000,
    0x0600, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc618, 0xc618, 0xc000, 0xc618, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc618, 0xc618, 0xc000, 0xc618, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc618,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc618, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc618,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc618,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc618, 0xc618, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc618,
    0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000,
    0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000,
    0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t orange_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0600, 0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600,
    0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600,
    0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0600, 0x0000, 0x0000, 0xe500, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000, 0x0000, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0xe500, 0xe500, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe500, 0xe500, 0xe500,
    0xe500, 0xe500, 0xe500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t bell_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe700,
    0xe700, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x9000, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0x9000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x9000, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0x9000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xe700, 0xe700, 0xe700, 0xc618,
    0xe700, 0xe700, 0xe700, 0xe700, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe700, 0xe700, 0xc618, 0xc618, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe700, 0xe700, 0xc618, 0xc618, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe700, 0xe700, 0xc618, 0xc618, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xe700, 0xe700, 0xc618, 0xc618, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000, 0x0000, 0x0000,
    0x0000, 0xe700, 0xe700, 0xe700, 0xc618, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000,
    0x0000, 0xe700, 0xe700, 0xe700, 0xc618, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000,
    0x0000, 0xe700, 0xe700, 0xe700, 0xc618, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000,
    0x0000, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0xe700, 0x0000,
    0x0000, 0xe700, 0xe700, 0x0618, 0x0618, 0x0618, 0x0618, 0x0618,
    0xc618, 0xc618, 0xc618, 0x0618, 0x0618, 0xe700, 0xe700, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618, 0x0618, 0x0618,
    0xc618, 0xc618, 0xc618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618, 0x0618, 0x0618,
    0xc618, 0xc618, 0xc618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t apple_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0600, 0x0600, 0x0600, 0x0600, 0x0000,
    0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x0600, 0x0600, 0x0600,
    0x0600, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x0600, 0x0600, 0x0600,
    0x0600, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0600,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc618, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000, 0xc000, 0x0000,
    0x0000, 0xc000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t melon_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0xc408, 0xc408, 0xc408, 0xc408,
    0xc408, 0xc408, 0xc408, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc408, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc408, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x4200, 0x4200, 0x4200,
    0x4200, 0x4200, 0x4200, 0x4200, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0600, 0x4200, 0x0600, 0x0600, 0x0600,
    0x4200, 0x0600, 0x0600, 0x0600, 0x4200, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x4200, 0x4200, 0x0600, 0x0600, 0x0600,
    0x4200, 0x0600, 0x0600, 0x0600, 0x4200, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x4200, 0x4200, 0x0600, 0x0600, 0x0600,
    0x4200, 0x0600, 0x0600, 0x0600, 0x4200, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x0600, 0x0600, 0x4200, 0x4200, 0x4200,
    0x4200, 0x4200, 0x4200, 0x4200, 0x4200, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x0600, 0x0600, 0x4200, 0x4200, 0x0600,
    0x0600, 0x4200, 0x4200, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x0600, 0x4200, 0x4200, 0x4200, 0x0600,
    0x0600, 0x4200, 0x4200, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000,
    0x0000, 0x4200, 0x4200, 0x0600, 0x4200, 0x4200, 0x4200, 0x0600,
    0x0600, 0x4200, 0x4200, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x4200, 0x0600, 0x0600, 0x0600, 0x4200,
    0x4200, 0x4200, 0x4200, 0x0600, 0x4200, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x4200, 0x0600, 0x0600, 0x0600, 0x4200,
    0x0600, 0x0600, 0x0600, 0x4200, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x4200, 0x4200, 0x4200, 0x4200,
    0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x4200, 0x4200, 0x4200, 0x4200,
    0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t galaxian_sprite[256] = {
    0x2318, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2318, 0x0000,
    0x2318, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000,
    0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2318, 0x0000,
    0x2318, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xc000,
    0xc000, 0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2318, 0x0000,
    0x2318, 0x2318, 0xe700, 0xc000, 0xc000, 0xc000, 0xc000, 0xc000,
    0xc000, 0xc000, 0xc000, 0xc000, 0xe700, 0xe700, 0x2318, 0x0000,
    0x2318, 0x2318, 0x2318, 0xe700, 0xe700, 0xe700, 0xc000, 0xe700,
    0xc000, 0xc000, 0xe700, 0xe700, 0x2318, 0x2318, 0x2318, 0x0000,
    0x2318, 0x2318, 0x2318, 0x2318, 0xe700, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0x2318, 0x2318, 0x2318, 0x2318, 0x0000,
    0x2318, 0x2318, 0x2318, 0x2318, 0xe700, 0xe700, 0xe700, 0xe700,
    0xe700, 0xe700, 0xe700, 0x2318, 0x2318, 0x2318, 0x2318, 0x0000,
    0x0000, 0x0000, 0x2318, 0x2318, 0x2318, 0x2318, 0xe700, 0xe700,
    0xe700, 0xe700, 0x2318, 0x2318, 0x2318, 0x2318, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x2318, 0x2318, 0x2318, 0x2318, 0xe700,
    0x2318, 0x2318, 0x2318, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x2318, 0x2318, 0x0000, 0xe700,
    0x0000, 0x0000, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x2318, 0x2318, 0x0000, 0xe700,
    0x0000, 0x0000, 0x2318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe700,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe700,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe700,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe700,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

uint16_t key_sprite[256] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618,
    0x0618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618, 0x0000,
    0x0000, 0x0618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618, 0x0000,
    0x0000, 0x0618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618, 0x0618,
    0x0618, 0x0618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x0618, 0x0618,
    0x0618, 0x0618, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc618,
    0x0000, 0xc618, 0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xc618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

#endif
