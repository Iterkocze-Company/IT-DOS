CFLAGS = -ffreestanding -O2 -Wall -Wextra -std=gnu99

SRC=$(wildcard *.c)


output: kernel.o boot.o intToStr.o io.o keyboard.o cursor.o linker.ld
	/root/opt/cross/bin/i686-elf-gcc -T linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib boot.o kernel.o intToStr.o io.o keyboard.o -lgcc
	cp ITDOS.bin /home/michal/IT-DOS-Ultimate/Wersja\ Testowa/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso /home/michal/IT-DOS-Ultimate/Wersja\ Testowa/bin/iso/
	qemu-system-i386 ITDOS.iso -soundhw pcspk


all: $(SRC)
	/root/opt/cross/bin/i686-elf-gcc -o $@ $^ $(CFLAGS)

