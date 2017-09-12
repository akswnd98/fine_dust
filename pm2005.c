
#include "pm2005.h"

unsigned char pm2005_get_result_cmd[5] = {0x11, 0x2, 0xb, 0x1, 0xe1};
unsigned char pm2005_result[20];

unsigned long pm2005_get_result()
{
	int i;
	for(i = 0; i < 5; i++) {
		uart_write(pm2005_get_result_cmd[i]);
	}
	for(i = 0; i < 20; i++) {
		pm2005_result[i] = uart_read();
	}
	return (((unsigned long)pm2005_result[3] << 24) | ((unsigned long)pm2005_result[4] << 16) | ((unsigned long)pm2005_result[5] << 8) | (unsigned long)pm2005_result[6]);
}
