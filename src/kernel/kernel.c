#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../drivers/io/include/io.h"
#include "../drivers/vga/include/vga.h"
#include "../drivers/keyboard/include/keyboard.h"

#include "../drivers/io/io.c"
#include "../drivers/vga/vga.c"
#include "../drivers/keyboard/keyboard.c"
#include "../utility/etc/cmd.c"

void kernel_main(void) 
{
	//extern uint8_t terminal_color;
	terminal_initialize();
	cmd_init();

	kernel_writestring("Witaj w systemie IT-DOS!\n");
	kernel_writestring("> ");
	cmd_handler();
}