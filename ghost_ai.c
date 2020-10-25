#include "ghost_ai.h"
#include "print_number.h"

/**
 * Initialises the positions of the four ghosts
 *
 * Whenever a level is completed or a life is lost,
 * this method can be called.
 */
void init_ghosts(game *game_ptr)
{
    static ghosts _ghosts;
    static ghost _ghost[4];
    game_ptr->ghosts_ptr = &_ghosts;
    game_ptr->ghosts_ptr->blinky = &_ghost[ 0 ];
    game_ptr->ghosts_ptr->pinky = &_ghost[ 1 ];
    game_ptr->ghosts_ptr->inky = &_ghost[ 2 ];
    game_ptr->ghosts_ptr->clyde = &_ghost[ 3 ];

    /*Initialise position of BLINKY - RED*/
    game_ptr->ghosts_ptr->blinky->turn = 0;
    game_ptr->ghosts_ptr->blinky->vec.x = -1;
    game_ptr->ghosts_ptr->blinky->vec.y = 0;
    game_ptr->ghosts_ptr->blinky->x = BLINKY_PEN_X;
    game_ptr->ghosts_ptr->blinky->y = BLINKY_PEN_Y;
    game_ptr->ghosts_ptr->blinky->temp_x = BLINKY_PEN_X;
    game_ptr->ghosts_ptr->blinky->temp_y = BLINKY_PEN_Y;
    game_ptr->ghosts_ptr->blinky->nearly_ending = 0;

    /*Initialise position of PINKY - PINK*/
    game_ptr->ghosts_ptr->pinky->turn = 1;
    game_ptr->ghosts_ptr->pinky->vec.x = 0;
    game_ptr->ghosts_ptr->pinky->vec.y = -1;
    game_ptr->ghosts_ptr->pinky->x = PINKY_PEN_X;
    game_ptr->ghosts_ptr->pinky->y = PINKY_PEN_Y;
    game_ptr->ghosts_ptr->pinky->temp_x = PINKY_PEN_X;
    game_ptr->ghosts_ptr->pinky->temp_y = PINKY_PEN_Y;
    game_ptr->ghosts_ptr->pinky->nearly_ending = 0;

    /*Initialise position of INKY - BLUE*/
    game_ptr->ghosts_ptr->inky->turn = 1;
    game_ptr->ghosts_ptr->inky->vec.x = 1;
    game_ptr->ghosts_ptr->inky->vec.y = 0;
    game_ptr->ghosts_ptr->inky->x = INKY_PEN_X;
    game_ptr->ghosts_ptr->inky->y = INKY_PEN_Y;
    game_ptr->ghosts_ptr->inky->temp_x = INKY_PEN_X;
    game_ptr->ghosts_ptr->inky->temp_y = INKY_PEN_Y;
    game_ptr->ghosts_ptr->inky->nearly_ending = 0;

    /*Initialise position of CLYDE - ORANGE*/
    game_ptr->ghosts_ptr->blinky->turn = 1;
    game_ptr->ghosts_ptr->clyde->vec.x = -1;
    game_ptr->ghosts_ptr->clyde->vec.y = 0;
    game_ptr->ghosts_ptr->clyde->x = CLYDE_PEN_X;
    game_ptr->ghosts_ptr->clyde->y = CLYDE_PEN_Y;
    game_ptr->ghosts_ptr->clyde->temp_x = CLYDE_PEN_X;
    game_ptr->ghosts_ptr->clyde->temp_y = CLYDE_PEN_Y;
    game_ptr->ghosts_ptr->clyde->nearly_ending = 0;

    /*Initialise state and previous state*/
    game_ptr->ghosts_ptr->blinky->prev_state = none;
    game_ptr->ghosts_ptr->pinky->prev_state = none;
    game_ptr->ghosts_ptr->inky->prev_state = none;
    game_ptr->ghosts_ptr->clyde->prev_state = none;

    /*Initialise its velocity*/
    game_ptr->ghosts_ptr->blinky->speed = 0.75;
    game_ptr->ghosts_ptr->pinky->speed = 0.75;
    game_ptr->ghosts_ptr->inky->speed = 0.75;
    game_ptr->ghosts_ptr->clyde->speed = 0.75;
}

void set_speed(uint8_t change_all, game *game_ptr, ghost *ghost_ptr, float speed)
{
    if( change_all )
    {
        game_ptr->ghosts_ptr->blinky->speed = speed;
        game_ptr->ghosts_ptr->pinky->speed = speed;
        game_ptr->ghosts_ptr->inky->speed = speed;
        game_ptr->ghosts_ptr->clyde->speed = speed;
    }
    else
    {
        ghost_ptr->speed = speed;
    }
}

void change_state(uint8_t change_all, game *game_ptr, ghost *ghosts_ptr, ghost_state state)
{
    /* change_all is a boolean, either 1 or 0.*/
    /* 1 means that every ghost's state is going to be changed*/
    if( change_all )
    {
        /*EATEN OR PEN*/
        if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN) )
        {
            game_ptr->ghosts_ptr->blinky->prev_state = game_ptr->ghosts_ptr->blinky->state;
        }

        if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
        {
            game_ptr->ghosts_ptr->pinky->prev_state = game_ptr->ghosts_ptr->pinky->state;
        }

        if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
        {
            game_ptr->ghosts_ptr->inky->prev_state = game_ptr->ghosts_ptr->inky->state;
        }

        if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
        {
            game_ptr->ghosts_ptr->clyde->prev_state = game_ptr->ghosts_ptr->clyde->state;
        }

        switch( state )
        {
        case CHASE:
            chase_all( game_ptr );
            break;

        case SCATTER:
            scatter_all( game_ptr );
            break;

        case FRIGHTENED:
            frightened_all( game_ptr );
            break;

        case EATEN:
            eaten_all( game_ptr );
            break;

        case PEN:
            pen_all( game_ptr );
            break;

        case none:
            break;
        }
    }
    else
    {
        ghosts_ptr->prev_state = ghosts_ptr->state;
        ghosts_ptr->state = state;
    }
}

void scatter_all(game *game_ptr)
{
    if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->blinky->state = SCATTER;
    }
    if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->pinky->state = SCATTER;
    }

    if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->inky->state = SCATTER;
    }

    if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
    {
        game_ptr->ghosts_ptr->clyde->state = SCATTER;
    }
}

void chase_all(game *game_ptr)
{
    if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->blinky->state = CHASE;
    }
    if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->pinky->state = CHASE;
    }
    if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->inky->state = CHASE;
    }
    if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
    {
        game_ptr->ghosts_ptr->clyde->state = CHASE;
    }
}

void frightened_all(game *game_ptr)
{
    if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN)
            && !(game_ptr->ghosts_ptr->blinky->x == 112 && 92 <= game_ptr->ghosts_ptr->blinky->y
                    && game_ptr->ghosts_ptr->blinky->y <= 116) )
    {
        game_ptr->ghosts_ptr->blinky->state = FRIGHTENED;
    }
    if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->pinky->state = FRIGHTENED;
    }
    if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->inky->state = FRIGHTENED;
    }
    if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
    {
        game_ptr->ghosts_ptr->clyde->state = FRIGHTENED;
    }
}

void eaten_all(game *game_ptr)
{
    if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->blinky->state = EATEN;
    }
    if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->pinky->state = EATEN;
    }
    if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->inky->state = EATEN;
    }
    if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
    {
        game_ptr->ghosts_ptr->clyde->state = EATEN;
    }
}

void pen_all(game *game_ptr)
{
    if( !(game_ptr->ghosts_ptr->blinky->state == PEN || game_ptr->ghosts_ptr->blinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->blinky->state = PEN;
    }
    if( !(game_ptr->ghosts_ptr->pinky->state == PEN || game_ptr->ghosts_ptr->pinky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->pinky->state = PEN;
    }
    if( !(game_ptr->ghosts_ptr->inky->state == PEN || game_ptr->ghosts_ptr->inky->state == EATEN) )
    {
        game_ptr->ghosts_ptr->inky->state = PEN;
    }
    if( !(game_ptr->ghosts_ptr->clyde->state == PEN || game_ptr->ghosts_ptr->clyde->state == EATEN) )
    {
        game_ptr->ghosts_ptr->clyde->state = PEN;
    }
}

void speed_setter(ghost *ghost_ptr)
{
    float speed = 1.0;
    switch( ghost_ptr->state )
    {
    case CHASE:
        speed = 0.75;
        break;

    case SCATTER:
        speed = 0.75;
        break;

    case FRIGHTENED:
        speed = 0.50;
        break;

    case EATEN:
        speed = 0.75;
        break;

    case PEN:
        speed = 0.4;
        break;

    default:
        /*Do nothing*/
        break;
    }
    set_speed( 0, NULL, ghost_ptr, speed );
}

/*Calls each individual AI function and set the direction of the ghosts.*/
void shortest_path_helper(game *game_ptr)
{
    ghost *ghost_set[ 4 ] = { game_ptr->ghosts_ptr->blinky, game_ptr->ghosts_ptr->pinky,
                              game_ptr->ghosts_ptr->inky, game_ptr->ghosts_ptr->clyde };

    int blinky_x;
    int blinky_y;
    int pinky_x;
    int pinky_y;
    int inky_x;
    int inky_y;
    int clyde_x;
    int clyde_y;

    blinky_ai( game_ptr, ghost_set[0], &blinky_x, &blinky_y );
    pinky_ai( game_ptr, ghost_set[1], &pinky_x, &pinky_y );
    inky_ai( game_ptr, ghost_set[2], &inky_x, &inky_y );
    clyde_ai( game_ptr, ghost_set[3], &clyde_x, &clyde_y );

    int xs[ 4 ] = { blinky_x, pinky_x, inky_x, clyde_x };
    int ys[ 4 ] = { blinky_y, pinky_y, inky_y, clyde_y };

    for( int i = 0; i < 4; ++i )
    {
        speed_setter( ghost_set[ i ] );
        shortest_path( ghost_set[ i ], game_ptr->board, xs[ i ], ys[ i ]);
    }

    game_ptr->ghosts_ptr->blinky->prev_state = game_ptr->ghosts_ptr->blinky->state;
    game_ptr->ghosts_ptr->pinky->prev_state = game_ptr->ghosts_ptr->pinky->state;
    game_ptr->ghosts_ptr->inky->prev_state = game_ptr->ghosts_ptr->inky->state;
    game_ptr->ghosts_ptr->clyde->prev_state = game_ptr->ghosts_ptr->clyde->state;
}

void shortest_path(ghost *ghost_ptr, uint8_t *board, int x, int y)
{
    uint8_t upwards_movement[3] = { 0, 0, 0 };
    int target_tile_x = x;
    int target_tile_y = y;
    int curr_x = ghost_ptr->x, curr_y = ghost_ptr->y;
    int curr_V_x = ghost_ptr->vec.x, curr_V_y = ghost_ptr->vec.y;
    int current_tile_x = curr_x / 8, current_tile_y = curr_y / 8;

    if( ghost_ptr->state == EATEN )
    {
        if( curr_x == 112 && 91 <= curr_y && curr_y < 116 )
        {
            ghost_ptr->turn = 0;
            ghost_ptr->vec.x = 0;
            ghost_ptr->vec.y = 1;
            return;
        }
    }

    if( ghost_ptr->state == CHASE || ghost_ptr->state == SCATTER )
    {
        if( curr_x == 112 && curr_y == 92 && curr_V_y == -1 )
        {
            ghost_ptr->turn = 0;
            ghost_ptr->vec.x = 1;
            ghost_ptr->vec.y = 0;
            return;
        }
        else if( curr_x == 112 && 92 < curr_y && curr_y <= 116 )
        {
            ghost_ptr->turn = 0;
            ghost_ptr->vec.x = 0;
            ghost_ptr->vec.y = -1;
            return;
        }
    }

    if( (curr_x % 8 != 3 && curr_x % 8 != 4) || (curr_y % 8 != 3 && curr_y % 8 != 4) )
    {
        return;
    }

    if( !ghost_ptr->turn )
    {
        ghost_ptr->turn = 1;
        return;
    }

    /* At this point, Mr. Ghost is at a position where he can turn*/
    /* Mr. Ghost, who never reverses his direction, has 3 possible directions.
     * This includes Left, Right and forward (based on perspective).
     * Here we compute all the three possible directions. We choose what costs
     * Mr. Ghost the least
     */

    vector forward_v, left_v, right_v;
    forward_v.x = curr_V_x;
    forward_v.y = curr_V_y;
    left_v.x = curr_V_y;
    left_v.y = -curr_V_x;
    right_v.x = -curr_V_y;
    right_v.y = curr_V_x;

    int forward_pixel_x = curr_x + forward_v.x;
    int forward_pixel_y = curr_y + forward_v.y;
    int left_pixel_x = curr_x + left_v.x;
    int left_pixel_y = curr_y + left_v.y;
    int right_pixel_x = curr_x + right_v.x;
    int right_pixel_y = curr_y + right_v.y;

    int forward_x = current_tile_x + forward_v.x;
    int forward_y = current_tile_y + forward_v.y;
    int left_x = current_tile_x + left_v.x;
    int left_y = current_tile_y + left_v.y;
    int right_x = current_tile_x + right_v.x;
    int right_y = current_tile_y + right_v.y;

    if( forward_v.y == -1 )
    {
        upwards_movement[0] = 1;
    }

    if( left_v.y == -1 )
    {
        upwards_movement[1] = 1;
    }

    if( right_v.y == -1 )
    {
        upwards_movement[2] = 1;
    }

    /*Forward, left, right*/
    int distances[ 3 ] = { -1, -1, -1 };
    uint8_t min_set = 0;
    /*Index of minimum*/
    int min = 0;
    vector relative_vectors[ 3 ] = { forward_v, left_v, right_v };

    if( legal_tile( forward_pixel_x, forward_pixel_y, forward_x, forward_y, board, upwards_movement[0] ) )
    {
        distances[ 0 ] = dist( forward_x, forward_y, target_tile_x, target_tile_y );
    }

    if( legal_tile( left_pixel_x, left_pixel_y, left_x, left_y, board, upwards_movement[1] ) )
    {
        distances[ 1 ] = dist( left_x, left_y, target_tile_x, target_tile_y );
    }

    if( legal_tile( right_pixel_x, right_pixel_y, right_x, right_y, board, upwards_movement[2] ) )
    {
        distances[ 2 ] = dist( right_x, right_y, target_tile_x, target_tile_y );
    }

    for( int i = 0; i < 3; ++i )
    {
        if( distances[ i ] != -1 && !min_set )
        {
            min = i;
            min_set = 1;
        }
        else if( min_set && distances[ i ] != -1 && distances[ i ] < distances[ min ])
        {
            min = i;
        }
    }

    ghost_ptr->turn = 0;
    ghost_ptr->vec.x = relative_vectors[ min ].x;
    ghost_ptr->vec.y = relative_vectors[ min ].y;
}

/**
 * Ghosts are forced to reverse their direction when the following changes happen
 * chase-to-scatter, chase-to-frightened, scatter-to-chase,
 * and scatter-to-frightened.
 */
void blinky_ai(game *game_ptr, ghost *blinky, int *x, int *y)
{
    switch( blinky->state )
    {
    case CHASE:
        if( blinky->prev_state == SCATTER )
        {
            blinky->vec.x *= -1;
            blinky->vec.y *= -1;
        }
        *x = (( game_ptr->pacman_ptr->x ) / 8 );
        *y = (( game_ptr->pacman_ptr->y ) / 8 );
        blinky->prev_state = CHASE;
        break;

    case SCATTER:
        if( blinky->prev_state == CHASE )
        {
            blinky->vec.x *= -1;
            blinky->vec.y *= -1;
        }
        *x = BLINKY_CORNER_X;
        *y = BLINKY_CORNER_Y;
        blinky->prev_state = SCATTER;
        break;

    case FRIGHTENED:
        if( blinky->prev_state == CHASE )
        {
            blinky->vec.x *= -1;
            blinky->vec.y *= -1;
        }
        else if( blinky->prev_state == SCATTER )
        {
            blinky->vec.x *= -1;
            blinky->vec.y *= -1;
        }
        blinky->prev_state = FRIGHTENED;
        *x = rand() % GAME_BOARD_X;
        *y = rand() % GAME_BOARD_Y;
        break;

    case EATEN:
        if( !(blinky->x == PINKY_PEN_X && blinky->y == PINKY_PEN_Y) )
        {
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
        }
        else
        {
            blinky->vec.x = 0;
            blinky->vec.y = -1;
            change_state( 0, game_ptr, blinky, CHASE );
            blinky->speed = 0.75;
            *x = game_ptr->pacman_ptr->x / 8;
            *y = game_ptr->pacman_ptr->y / 8;
        }
        blinky->prev_state = EATEN;
        break;

    case PEN:
        /*Do nothing*/
        break;

    case none:
        /*do nothing*/
        break;
    }
}

void pinky_ai(game *game_ptr, ghost *pinky, int *x, int *y)
{
    static uint64_t timer = 1;

    switch( pinky->state )
    {
    case CHASE:
        if( pinky->prev_state == SCATTER )
        {
            pinky->vec.x *= -1;
            pinky->vec.y *= -1;
        }

        if( game_ptr->pacman_ptr->x )
        {
            if( game_ptr->pacman_ptr->x == 1 )
            {
                /*Right*/
                *x = (game_ptr->pacman_ptr->x / 8) + 4;
                *y = (game_ptr->pacman_ptr->y / 8);
            }
            else
            {
                /*Left*/
                *x = (game_ptr->pacman_ptr->x / 8) - 4;
                *y = (game_ptr->pacman_ptr->y / 8);
            }
        }
        else
        {
            if( game_ptr->pacman_ptr->y == 1 )
            {
                /*Down*/
                *x = (game_ptr->pacman_ptr->x / 8);
                *y = (game_ptr->pacman_ptr->y / 8) + 4;
            }
            else
            {
                /*Up*/
                *x = (game_ptr->pacman_ptr->x / 8) - 4;
                *y = (game_ptr->pacman_ptr->y / 8) - 4;
            }
        }
        pinky->prev_state = CHASE;
        break;

    case SCATTER:
        if( pinky->prev_state == CHASE )
        {
            pinky->vec.x *= -1;
            pinky->vec.y *= -1;
        }
        *x = PINKY_CORNER_X;
        *y = PINKY_CORNER_Y;
        pinky->prev_state = SCATTER;
        break;

    case FRIGHTENED:
        if( pinky->prev_state == CHASE )
        {
            pinky->vec.x *= -1;
            pinky->vec.y *= -1;
        }
        else if( pinky->prev_state == SCATTER )
        {
            pinky->vec.x *= -1;
            pinky->vec.y *= -1;
        }
        pinky->prev_state = FRIGHTENED;
        *x = rand() % GAME_BOARD_X;
        *y = rand() % GAME_BOARD_Y;
        break;

    case EATEN:
        if( !(pinky->x == PINKY_PEN_X && pinky->y == PINKY_PEN_Y) )
        {
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
        }
        else
        {
            pinky->vec.x = 0;
            pinky->vec.y = -1;
            timer = 1;
            pinky->state = PEN;
        }
        pinky->prev_state = EATEN;
        break;

    case PEN:
        if( timer < PINKY_PEN_TIME )
        {
            if( timer == 1 )
            {
                pinky->vec.x = 0;
                pinky->vec.y = 1;
            }
            else if( pinky->x == PINKY_PEN_X && pinky->y == PINKY_PEN_Y + 4 )
            {
                pinky->vec.x = 0;
                pinky->vec.y = -1;
            }
            else if( pinky->x == PINKY_PEN_X && pinky->y == PINKY_PEN_Y - 4 )
            {
                pinky->vec.x = 0;
                pinky->vec.y = 1;
            }
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
            timer += 1;
        }
        else
        {
            pinky->vec.x = 0;
            pinky->vec.y = -1;
            pinky->state = CHASE;
        }
        pinky->prev_state = PEN;
        break;

    case none:
        /*do nothing*/
        break;
    }
}

void inky_ai(game *game_ptr, ghost *inky, int *x, int *y)
{
    static uint64_t timer = 1;
    switch( inky->state )
    {
    case CHASE:
    {
        if( inky->prev_state == SCATTER )
        {
            inky->vec.x *= -1;
            inky->vec.y *= -1;
        }
        int offset_x;
        int offset_y;
        if( game_ptr->pacman_ptr->vec.y == -1 )
        {
            /*Two tiles up and two tiles left if pacman is moving upwards*/
            offset_x = (game_ptr->pacman_ptr->x) / 8 - 2;
            offset_y = (game_ptr->pacman_ptr->y) / 8 + 2 * (game_ptr->pacman_ptr->vec.y);
        }
        else
        {
            offset_x = (game_ptr->pacman_ptr->x) / 8 + 2 * (game_ptr->pacman_ptr->vec.x);
            offset_y = (game_ptr->pacman_ptr->y) / 8 + 2 * (game_ptr->pacman_ptr->vec.y);
        }
        int shift_x = offset_x - ((game_ptr->ghosts_ptr->blinky->x) / 8);
        int shift_y = offset_y - ((game_ptr->ghosts_ptr->blinky->y) / 8);
        *x = offset_x + shift_x;
        *y = offset_y + shift_y;
        inky->prev_state = CHASE;
        break;
    }

    case SCATTER:
        if( inky->prev_state == CHASE )
        {
            inky->vec.x *= -1;
            inky->vec.y *= -1;
        }
        *x = INKY_CORNER_X;
        *y = INKY_CORNER_Y;
        inky->prev_state = SCATTER;
        break;

    case FRIGHTENED:
        if( inky->prev_state == CHASE )
        {
            inky->vec.x *= -1;
            inky->vec.y *= -1;
        }
        else if( inky->prev_state == SCATTER )
        {
            inky->vec.x *= -1;
            inky->vec.y *= -1;
        }
        inky->prev_state = FRIGHTENED;
        *x = rand() % GAME_BOARD_X;
        *y = rand() % GAME_BOARD_Y;
        break;

    case EATEN:
        if( !(inky->x == PINKY_PEN_X && inky->y == PINKY_PEN_Y) )
        {
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
        }
        else
        {
            inky->vec.x = 0;
            inky->vec.y = -1;
            timer = 1;
            inky->state = PEN;
        }
        inky->prev_state = EATEN;
        break;

    case PEN:
        if( timer < INKY_PEN_TIME )
        {
            if( timer == 1 )
            {
                inky->vec.x = 0;
                inky->vec.y = 1;
            }
            else if( inky->x == PINKY_PEN_X && inky->y == PINKY_PEN_Y + 4 )
            {
                inky->vec.x = 0;
                inky->vec.y = -1;
            }
            else if( inky->x == PINKY_PEN_X && inky->y == PINKY_PEN_Y - 4 )
            {
                inky->vec.x = 0;
                inky->vec.y = 1;
            }
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
            timer += 1;
        }
        else
        {
            inky->vec.x = 0;
            inky->vec.y = -1;
            inky->state = CHASE;
        }
        inky->prev_state = PEN;
        break;

    case none:
        /*do nothing*/
        break;
    }
}

void clyde_ai(game *game_ptr, ghost *clyde, int *x, int *y)
{
    static uint64_t timer = 1;
    switch( clyde->state )
    {
    case CHASE:
    {
        if( clyde->prev_state == SCATTER )
        {
            clyde->vec.x *= -1;
            clyde->vec.y *= -1;
        }
        int radius = dist( clyde->x / 8, clyde->y / 8, game_ptr->pacman_ptr->x / 8,
                game_ptr->pacman_ptr->y / 8 );
        if( radius >= 64 )
        {
            *x = game_ptr->pacman_ptr->x / 8;
            *y = game_ptr->pacman_ptr->y / 8;
        }
        else
        {
            *x = CLYDE_CORNER_X;
            *y = CLYDE_CORNER_Y;
        }
        clyde->prev_state = CHASE;
        break;
    }
    case SCATTER:
        if( clyde->prev_state == CHASE )
        {
            clyde->vec.x *= -1;
            clyde->vec.y *= -1;
        }
        *x = CLYDE_CORNER_X;
        *y = CLYDE_CORNER_Y;
        clyde->prev_state = SCATTER;
        break;
    case FRIGHTENED:
        if( clyde->prev_state == CHASE )
        {
            clyde->vec.x *= -1;
            clyde->vec.y *= -1;
        }
        else if( clyde->prev_state == SCATTER )
        {
            clyde->vec.x *= -1;
            clyde->vec.y *= -1;
        }
        clyde->prev_state = FRIGHTENED;
        *x = rand() % GAME_BOARD_X;
        *y = rand() % GAME_BOARD_Y;
        break;
    case EATEN:
        if( !(clyde->x == PINKY_PEN_X && clyde->y == PINKY_PEN_Y) )
        {
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
        }
        else
        {
            clyde->vec.x = 0;
            clyde->vec.y = -1;
            timer = 1;
            clyde->state = PEN;
        }
        clyde->prev_state = EATEN;
        break;
    case PEN:
        if( timer < CLYDE_PEN_TIME )
        {
            if( timer == 1 )
            {
                clyde->vec.x = 0;
                clyde->vec.y = 1;
            }
            else if( clyde->x == PINKY_PEN_X && clyde->y == PINKY_PEN_Y + 4 )
            {
                clyde->vec.x = 0;
                clyde->vec.y = -1;
            }
            else if( clyde->x == PINKY_PEN_X && clyde->y == PINKY_PEN_Y - 4 )
            {
                clyde->vec.x = 0;
                clyde->vec.y = 1;
            }
            *x = PINKY_PEN_X / 8;
            *y = PINKY_PEN_Y / 8;
            timer += 1;
        }
        else
        {
            clyde->vec.x = 0;
            clyde->vec.y = -1;
            clyde->state = CHASE;
        }
        clyde->prev_state = PEN;
        break;
    case none:
/*do nothing*/
        break;
    }
}

uint8_t legal_tile(int x_pixel, int y_pixel, int x_tile, int y_tile, uint8_t *board, uint8_t upwards)
{
    (void)x_pixel;
    (void)y_pixel;
    (void)upwards;
    return ((0 <= x_tile && x_tile < GAME_BOARD_X) && (0 <= y_tile && y_tile < GAME_BOARD_Y)
            && get_board_value( x_tile, y_tile, board ));
}

void get_ghost_board_coord(ghost *ghost_ptr, int *bx, int *by)
{
    int x = ghost_ptr->x;
    int y = ghost_ptr->y;
    *bx = x / 8;
    *by = y / 8;
}
