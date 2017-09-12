
#ifndef __ADA_FRUIT_H__
#define __ADA_FRUIT_H__

#ifndef F_CPU
#define F_CPU 16000000L
#endif

#include <avr/io.h>
#include <util/delay.h>

#include "my_spi.h"

void ada_fruit_init();
void ada_fruit_reset();
void ada_fruit_write_command(unsigned char command);
void ada_fruit_write_data(unsigned char data);
void ada_fruit_go_to(unsigned char x, unsigned char y);
void ada_fruit_draw_horizental_line(unsigned char length, uint16_t color);

#endif
