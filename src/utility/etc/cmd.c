/* This file is under BSD 3-Clause License and it's part of Iterkocze IT-DOS
Copyright (c) 2021, Iterkocze-Company
All rights reserved. */

#include <stdint.h>
#include <stddef.h> 

unsigned char cmd[255];

void clear_buffer()
{
	for(uint8_t i = 0; i<255;i++)
		cmd[i] = '\000';
}

static void cmd_init()
{
	clear_buffer();
}

void cmd_handler() //Zrobiony in The Michal Wae... O cholera. Ten sterownik to tragedia. Too Bad.
{
	for (int i = 0; i<255; i++)
	{
		cmd[i] = get_keyboard_char();

		if(isEnter && STRCMP(cmd, "KBD")==0)
		{
			clear_buffer();
			kernel_writestring("yes!\n");
			i = -1;
			isEnter = false;
			enterRows = 0;
		}

		/*if (cmd[0] == 'C' && cmd[1] == 'L' && cmd[2] == 'S' && cmd[3] == 'e')
		{
			clear_buffer();
		}*/
		
	}
}