
#include "ada_fruit.h"
#include "pm2005.h"

void ada_fruit_init()
{
	spi_init();
	DDRB |= (1 << PB0);
	PORTB |= (1 << PB0);
	DDRB |= (1 << PB1);
	ada_fruit_reset();
	ada_fruit_write_command(0xfd);
	ada_fruit_write_data(0x12);
	ada_fruit_write_command(0xfd);
	ada_fruit_write_data(0xb1);
	ada_fruit_write_command(0xa1);
	ada_fruit_write_data(0);
	ada_fruit_write_command(0xa2);
	ada_fruit_write_data(0);
	ada_fruit_write_command(0xaf);
}

void ada_fruit_reset()
{
	PORTB |= (1 << PB0);
	_delay_ms(500);
	PORTB &= ~(1 << PB0);
	_delay_ms(500);
	PORTB |= (1 << PB0);
	_delay_ms(500);
}

void ada_fruit_write_command(unsigned char command)
{
	PORTB &= ~(1 << PB1);
	spi_write(command);
}

void ada_fruit_write_data(unsigned char data)
{
	PORTB |= (1 << PB1);
	spi_write(data);
}

void ada_fruit_go_to(unsigned char x, unsigned char y)
{
	ada_fruit_write_command(0x15);
	ada_fruit_write_data(x);
	ada_fruit_write_data(127);
	ada_fruit_write_command(0x75);
	ada_fruit_write_data(y);
	ada_fruit_write_data(127);
	ada_fruit_write_command(0x5c);
}

void ada_fruit_draw_horizental_line(unsigned char length, uint16_t color)
{
	for(int i = 0; i < length; i++) {
		ada_fruit_write_data(color >> 8);
		ada_fruit_write_data(color);
	}
}
