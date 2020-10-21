#include "util.h"
#include "game.h"

int dist(int x1, int y1, int x2, int y2)
{
  return (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

uint32_t get_centre_x(uint32_t width)
{
    return ((SCREEN_WIDTH - width) / 2U);
}
