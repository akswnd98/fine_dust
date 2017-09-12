
#include "fine_dust.h"

int main() {
	int i;
	unsigned int result;
	unsigned char ch;

	ada_fruit_init();
	uart_init();

	ada_fruit_write_command(0x5c);
	for(i = 0; i < 128 * 128; i++) {
		ada_fruit_write_data(0xff);
		ada_fruit_write_data(0xff);
	}

	while(1) {
		result = (unsigned int)pm2005_get_result();
		three_char_clean_all(0xffff);
		three_char_print_dec3(result, 0);
		_delay_ms(3000);
	}

	while(1);

	return 1;
}
