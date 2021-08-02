#include <stddef.h>
#include <stdint.h>

void update_cursor(int x, int y)// BuT HooWwwW??//. To dosłownie używa czarnej magii.
{
	uint16_t pos = y * 80 + x;
 
	outb(0x3D4, 0x0F);
	outb(0x3D5, (uint8_t) pos);
	outb(0x3D4, 0x0E);
	outb(0x3D5, (uint8_t) (pos >> 8)); //Dlaczego shiftuje 8 miejsc? To nadal będzie ta sama liczba. To nic nie zmienia, ale jednak bez tego nie działa.
}

uint16_t get_cursor_position(void)
{
    uint16_t pos = 0;
    outb(0x3D4, 0x0F);
    pos |= inb(0x3D5);
    outb(0x3D4, 0x0E);
    pos |= ((uint16_t)inb(0x3D5)) << 8;
    return pos;
}