#include <stdint.h>

void cmd_handler() //Zrobiony in The Michal Wae
{
	unsigned char cmd[255];
	unsigned char cmd_e[1];
		
		for (uint8_t i = 0; i<255; i++)
		{
			cmd[i] = get_keyboard_char();
			cmd_e[0] = get_keyboard_char();

			if (cmd_e[0] == 'e') //Enter zostal nacisniety
			{	
				if (cmd[i] == 'A')
					kernel_writestring("helo");
				for (uint8_t i = 0; i<255; i++)
					cmd[i] = '-';
			}
		}

}