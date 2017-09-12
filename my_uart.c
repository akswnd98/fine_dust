
#include "my_uart.h"

void uart_init()
{
	UBRR0H = 0;
	UBRR0L = 103;

	UCSR0C |= 0x06;

	UCSR0B |= _BV(RXEN0);
	UCSR0B |= _BV(TXEN0);
}

void uart_write(unsigned char data)
{
	while(!(UCSR0A & (1 << UDRE0)));
	UDR0 = data;
}

unsigned char uart_read()
{
	while(!(UCSR0A & (1 << RXC0)));
	return UDR0;
}
