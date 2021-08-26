#include <stdint.h>
#include <stddef.h>

unsigned char cmd[255];

static void clear_buffer()
{
	for(uint8_t i = 0; i<255;i++)
		cmd[i] = 0;
}

void cmd_handler() //Zrobiony in The Michal Wae
{
		
	for (uint8_t i = 0; i<255; i++)
	{
		cmd[i] = get_keyboard_char();
		
		if (cmd[0] == 'A' && cmd[1] == 'B' && cmd[2] == 'C' && cmd[3] == 'e')
		{
			add_newline();
			kernel_writestring("hah");
			i = -1;
			clear_buffer();
			add_newline();	
		} //dziala, ale jak wpiszesz zla komende raz, to juz petla dostaje ataku serca i nie dziala, a ja nie wiem jak ja zresetowac...
	}
}