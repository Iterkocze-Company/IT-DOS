#define KBD_CMD_ENABLE 0xF4 //Wywala na QEMU
#define KBD_CMD_ECHO 0xEE
#define KBD_CMD_SELFTEST 0x60

#define KBD_CMD_PORT 0x64
#define KBD_DATA_PORT 0x60

// KLAWISZE //
#define Z 44
#define X 45
#define C 46
#define V 47
#define B 48
#define N 49
#define M 50
#define A 30
#define S 31
#define D 32
#define F 33
#define G 34
#define H 35
#define J 36
#define K 37
#define L 38

#include <stdbool.h>

static void keyboard_init()
{
	outb(KBD_CMD_PORT, KBD_CMD_ECHO);
}

static void keyboard_wait(void) 
{
	while(inb(0x64) & 2);
}

unsigned static char keyboard_handler() 
{
	unsigned char scancode;
	keyboard_wait();
	scancode = inb(0x60);
	//outb(0x20, 0x20);
	char str[50];

	return scancode;
}

static unsigned char get_keyboard_char()
{
	unsigned char oldKey;
	unsigned char scancode;
	while (true)
	{
		oldKey = inb(0x60);
		oldKey = keyboard_handler();
		//outb(0x20, 0x20); ACK?
		if (oldKey != scancode)
		{
			scancode = keyboard_handler();
			//char str[50];
			//kernel_writestring(ConvertIntToString(scancode,str,16));
			//kernel_writestring("\n");
			if (scancode == A)
			{
				outb(0x60,0x00);
				kernel_writestring("A");
				return 'A';
			}
			if (scancode == B)
			{
				outb(0x60,0x00);
				kernel_writestring("B");
				return 'B';
			}
			if (scancode == C)
			{
				outb(0x60,0x00);
				kernel_writestring("C");
				return 'C';
			}
			if (scancode == D)
			{
				outb(0x60,0x00);
				kernel_writestring("D");
				return 'D';
			}
			if (scancode == Z)
			{
				outb(0x60,0x00);
				kernel_writestring("Z");
				return 'Z';
			}
			if (scancode == X)
			{
				outb(0x60,0x00);
				kernel_writestring("X");
				return 'X';
			}
			if (scancode == V)
			{
				outb(0x60,0x00);
				kernel_writestring("V");
				return 'V';
			}
			if (scancode == B)
			{
				outb(0x60,0x00);
				kernel_writestring("B");
				return 'B';
			}
			if (scancode == N)
			{
				outb(0x60,0x00);
				kernel_writestring("N");
				return 'N';
			}
			if (scancode == M)
			{
				outb(0x60,0x00);
				kernel_writestring("M");
				return 'M';
			}
			if (scancode == 0x1C) //Enter
			{
				return 0;
			}
		}
	}
}

