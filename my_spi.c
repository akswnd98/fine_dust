
#include "my_spi.h"

void spi_init()
{
	DDRB |= (1 << SPI_SS);
	PORTB |= (1 << SPI_SS);
	DDRB |= (1 << SPI_MOSI);
	DDRB &= ~(1 << SPI_MISO);
	DDRB |= (1 << SPI_SCK);

	SPCR |= (1 << SPE);
	SPCR |= (1 << MSTR);
	SPCR |= (1 << CPOL);
	SPCR |= (1 << CPHA);
}

void spi_write(unsigned char data)
{
	PORTB &= ~(1 << SPI_SS);
	SPDR = data;
	while(!(SPSR & (1 << SPIF)));
	PORTB |= (1 << SPI_SS);
}

