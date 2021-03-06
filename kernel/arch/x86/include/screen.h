#pragma once
#include <types.h>
#define index(X, Y) ((Y * 80) + X)
#define setattr(chr, attr) (chr | (attr << 8))


enum color_e
{
	Black = 0,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Brown,
	Light_Grey,
	Dark_Grey,
	Light_Blue,
	Light_Green,
	Light_Cyan,
	Light_Red,
	Light_Magenta,
	Light_Yellow,
	White
};

unsigned int pos_x;
unsigned int pos_y;

void raw_putch (char chr);
void clear_screen (void);
void update_curs (void);
void update_scroll (void);
void set_colors (enum color_e foreground, enum color_e background);
void screen_init (void);
void get_colors (enum color_e * colors);