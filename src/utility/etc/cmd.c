/* This file is under BSD 3-Clause License and it's part of Iterkocze IT-DOS
Copyright (c) 2021, Iterkocze-Company
All rights reserved. */

#include <stdint.h>
#include <stddef.h> 

unsigned char cmd[255];
uint8_t i=0;

static void clear_buffer()
{
	for(uint8_t i = 0; i<255;i++)
		cmd[i] = 0;
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


		if (cmd[0] == 'K' && cmd[1] == 'B' && cmd[2] == 'D' && cmd[3] == 'e')
		{
			kernel_writestring("Keyboard");
			clear_buffer();
		}

		/*if(STRCMP(cmd, "KBD"))
		{
			kernel_writestring("yes!\n");
		}*/

		if (cmd[0] == 'C' && cmd[1] == 'L' && cmd[2] == 'S' && cmd[3] == 'e')
		{
			clear_buffer();
		}
		
	}
}