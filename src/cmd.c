#include <stdint.h>
#include <stddef.h> 

unsigned char cmd[255];
uint8_t i ;

static void clear_buffer()
{
	for(uint8_t i = 0; i<255;i++)
		cmd[i] = ' ';
}

static void cmd_init()
{
	clear_buffer();
}

void cmd_handler() //Zrobiony in The Michal Wae... O cholera. Ten sterownik to tragedia. Too Bad.
{
		
	for (i = 0; i<255; i++)
	{
		cmd[i] = get_keyboard_char();
		
		/*if (cmd[0] == 'e')
		{
			//clear_buffer();
			i = -1;
			//kernel_writestring("Sam Enter!");
			add_newline();
		}*/

		if (cmd[0] == 'K' && cmd[1] == 'B' && cmd[2] == 'D' && cmd[3] == 'e')
		{
			kernel_writestring("Keyboard");
			//outb(0x60,0x20);
			//add_newline();
			//i = -1;
			clear_buffer();
		}
		if (cmd[0] == 'C' && cmd[1] == 'L' && cmd[2] == 'S' && cmd[3] == 'e')
		{
			//kernel_writestring("Clear");
			clear();
			//add_newline();
			//i = -1;
			clear_buffer();
		}
		
	}
}