#include "rpi-mailbox-interface.h"
#include "game.h"

volatile unsigned char *frame_buffer_init( void )
{
    volatile unsigned char *fb = NULL;
    rpi_mailbox_property_t *mp = NULL;

    /* Ensure the ARM is running at it's maximum rate */
    RPI_PropertyInit();
    RPI_PropertyAddTag(TAG_SET_CLOCK_RATE, TAG_CLOCK_ARM, mp->data.buffer_32[1]);
    RPI_PropertyProcess();

    mp = RPI_PropertyGet(TAG_GET_CLOCK_RATE);

    /* Initialise a framebuffer */
    RPI_PropertyInit();
    RPI_PropertyAddTag(TAG_ALLOCATE_BUFFER);
    RPI_PropertyAddTag(TAG_SET_PHYSICAL_SIZE, SCREEN_WIDTH, SCREEN_HEIGHT);
    RPI_PropertyAddTag(TAG_SET_VIRTUAL_SIZE, SCREEN_WIDTH, SCREEN_HEIGHT << 1);
    RPI_PropertyAddTag(TAG_SET_VIRTUAL_OFFSET, 0, 0);
    RPI_PropertyAddTag(TAG_SET_DEPTH, SCREEN_DEPTH);
    RPI_PropertyProcess();

    if(( mp = RPI_PropertyGet( TAG_ALLOCATE_BUFFER )))
    {
        fb = (unsigned char*) mp->data.buffer_32[ 0 ];
    }

    return fb;
}

int frame_buffer_switch(int offset)
{
    // switch between front and back buffer
    RPI_PropertyInit();
    if( !offset )
    {
        offset = SCREEN_HEIGHT;
        RPI_PropertyAddTag( TAG_SET_VIRTUAL_OFFSET, 0, 0 );
        RPI_PropertyProcess();
    }
    else
    {
        offset = 0;
        RPI_PropertyAddTag( TAG_SET_VIRTUAL_OFFSET, 0, SCREEN_HEIGHT );
        RPI_PropertyProcess();
    }

    return offset;
}
