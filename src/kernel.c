#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "intToStr.c"
#include "cursor.c"
#include "keyboard.c"
#include "vga.c"

void kernel_main(void) 
{
	extern uint8_t terminal_color;
	terminal_initialize();

	kernel_writestring("Witaj w systemie IT-DOS!\n");
	kernel_writestring("> ");

	unsigned char cmd[9]; //COLOR RED
	
	cmd[0] = get_keyboard_char();
	cmd[1] = get_keyboard_char();
	cmd[2] = get_keyboard_char();
	cmd[3] = get_keyboard_char();
	cmd[4] = get_keyboard_char();
	cmd[5] = get_keyboard_char();
	cmd[6] = get_keyboard_char();
	cmd[7] = get_keyboard_char();
	cmd[8] = get_keyboard_char();

	if (cmd[0] == 'C' && cmd[1] == 'O' && cmd[2] == 'L' && cmd[3] == 'O' && cmd[4] == 'R' && cmd[5] == ' ' && cmd[6] == 'R' && cmd[7] == 'E' && cmd[8] == 'D') //Proszę, nie patrz na mnie...
	{
		terminal_color = VGA_COLOR_RED;
		kernel_writestring("Zgodnosc!\n");
	}
}