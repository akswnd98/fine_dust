
#ifndef __MY_SPI_H__
#define __MY_SPI_H__

#ifndef F_CPU
#define F_CPU 16000000L
#endif

#include <avr/io.h>
#include <util/delay.h>

#define SPI_SS PB2
#define SPI_MOSI PB3
#define SPI_MISO PB4
#define SPI_SCK PB5

void spi_init();
void spi_write(unsigned char data);

#endif
