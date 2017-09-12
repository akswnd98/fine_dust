
#ifndef __MY_UART_H__
#define __MY_UART_H__

#ifndef F_CPU
#define F_CPU 16000000L
#endif

#include <avr/io.h>
#include <util/delay.h>

void uart_init();
void uart_write(unsigned char data);
unsigned char uart_read();

#endif
