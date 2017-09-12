#include "three_char.h"

void three_char_print_one_char(unsigned char offset, unsigned char data, uint16_t color)
{
	unsigned char x;
	int i;

	x = 11 * (offset + 1) + 26 * offset;

	if(data == '0') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 24; i++) {
			ada_fruit_go_to(x, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '1') {
		for(i = 0; i < 40; i++) {
			ada_fruit_go_to(x + 18, 44 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
	}

	else if(data == '2') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x + 18, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '3') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x + 18, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '4') {
		for(i = 0; i < 16; i++) {
			ada_fruit_go_to(x + 18, 44 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 16; i++) {
			ada_fruit_go_to(x, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
	}

	else if(data == '5') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '6') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '7') {
		for(i = 0; i < 16; i++) {
			ada_fruit_go_to(x + 18, 44 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 16; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 60 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '8') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}

	else if(data == '9') {
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 44 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x + 18, 52 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 60 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
			ada_fruit_go_to(x + 18, 68 + i);
			ada_fruit_draw_horizental_line(8, 0);
		}
		for(i = 0; i < 8; i++) {
			ada_fruit_go_to(x, 76 + i);
			ada_fruit_draw_horizental_line(26, 0);
		}
	}
}

void three_char_print_dec3(unsigned int num, uint16_t color)
{
	if(num >= 1000) {
		return ;
	}
	three_char_print_one_char(0, 48 + (num / 100), color);
	three_char_print_one_char(1, 48 + ((num % 100) / 10), color);
	three_char_print_one_char(2, 48 + (num % 10), color);
}

void three_char_clean_one(unsigned char offset, uint16_t color)
{
	unsigned char x = 11 * (offset + 1) + 26 * offset;
	for(int i = 0; i < 40; i++) {
		ada_fruit_go_to(x, 44 + i);
		ada_fruit_draw_horizental_line(26, color);
	}
}

void three_char_clean_all(uint16_t color)
{
	three_char_clean_one(0, color);
	three_char_clean_one(1, color);
	three_char_clean_one(2, color);
}
