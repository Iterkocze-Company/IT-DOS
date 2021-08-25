#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "lib/vga.h"
#include "lib/keyboard.h"

#include "intToStr.c"
#include "cursor.c"

void kernel_main(void) 
{
	extern uint8_t terminal_color;
	terminal_initialize();

	kernel_writestring("Witaj w systemie IT-DOS!\n");
	kernel_writestring("> ");

	unsigned char cmd[1];
	
	while (true)
		cmd[0] = get_keyboard_char();
}