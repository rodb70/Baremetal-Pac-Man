#include "util.h"
#include "game.h"

#define SYSTEM_TIMER_L  0x20003004

uint64_t timer_tick(void)
{
    return *((uint64_t *) SYSTEM_TIMER_L);
}

void timer_start(uint64_t *timer)
{
    *timer = timer_tick();
}

uint64_t timer_get_relative(uint64_t timer)
{
    return *((uint64_t *) SYSTEM_TIMER_L) - timer;
}
