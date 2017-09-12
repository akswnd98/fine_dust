###############################################################################
# Makefile for the project fine_dust
###############################################################################

## General Flags
PROJECT = fine_dust
MCU = atmega328p
TARGET = fine_dust.elf
CC = avr-gcc

CPP = avr-g++

## Options common to compile, link and assembly rules
COMMON = -mmcu=$(MCU)

## Compile options common for all C compilation units.
CFLAGS = $(COMMON)
CFLAGS += -Wall -gdwarf-2 -std=gnu99 -Os -funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums
CFLAGS += -MD -MP -MT $(*F).o -MF dep/$(@F).d 

## Assembly specific flags
ASMFLAGS = $(COMMON)
ASMFLAGS += $(CFLAGS)
ASMFLAGS += -x assembler-with-cpp -Wa,-gdwarf2

## Linker flags
LDFLAGS = $(COMMON)
LDFLAGS +=  -Wl,-Map=fine_dust.map


## Intel Hex file production flags
HEX_FLASH_FLAGS = -R .eeprom -R .fuse -R .lock -R .signature

HEX_EEPROM_FLAGS = -j .eeprom
HEX_EEPROM_FLAGS += --set-section-flags=.eeprom="alloc,load"
HEX_EEPROM_FLAGS += --change-section-lma .eeprom=0 --no-change-warnings


## Objects that must be built in order to link
OBJECTS = fine_dust.o ada_fruit.o my_spi.o three_char.o my_uart.o pm2005.o 

## Objects explicitly added by the user
LINKONLYOBJECTS = 

## Build
all: $(TARGET) fine_dust.hex fine_dust.eep fine_dust.lss size

## Compile
fine_dust.o: ../fine_dust.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

ada_fruit.o: ../ada_fruit.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

my_spi.o: ../my_spi.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

three_char.o: ../three_char.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

my_uart.o: ../my_uart.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

pm2005.o: ../pm2005.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

##Link
$(TARGET): $(OBJECTS)
	 $(CC) $(LDFLAGS) $(OBJECTS) $(LINKONLYOBJECTS) $(LIBDIRS) $(LIBS) -o $(TARGET)

%.hex: $(TARGET)
	avr-objcopy -O ihex $(HEX_FLASH_FLAGS)  $< $@

%.eep: $(TARGET)
	-avr-objcopy $(HEX_EEPROM_FLAGS) -O ihex $< $@ || exit 0

%.lss: $(TARGET)
	avr-objdump -h -S $< > $@

size: ${TARGET}
	@echo
	@avr-size -C --mcu=${MCU} ${TARGET}

## Clean target
.PHONY: clean
clean:
	-rm -rf $(OBJECTS) fine_dust.elf dep/* fine_dust.hex fine_dust.eep fine_dust.lss fine_dust.map


## Other dependencies
-include $(shell mkdir dep 2>/dev/null) $(wildcard dep/*)

