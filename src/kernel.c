#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "lib/vga.h"
//#include "lib/keyboard.h"
#include "keyboard.c"

#include "intToStr.c"
#include "cursor.c"
#include "cmd.c"

void kernel_main(void) 
{
	extern uint8_t terminal_color;
	terminal_initialize();

	kernel_writestring("Witaj w systemie IT-DOS!\n");
	kernel_writestring("> ");

	cmd_handler();
}