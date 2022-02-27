#ifndef _HEADER_H
#define _HEADER_H
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

void must_init(bool test, const char *description);
void drawPlayfield(ALLEGRO_FONT *font);

#endif