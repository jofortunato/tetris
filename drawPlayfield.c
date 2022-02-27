#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include "header.h"

void drawPlayfield(ALLEGRO_FONT *font)
{
    al_clear_to_color(al_map_rgb(0, 0, 0));
    al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, "Tetris");

    al_draw_filled_rectangle(240, 100, 340, 200, al_map_rgba_f(0, 0, 0.5, 0.5));

    al_flip_display();
}