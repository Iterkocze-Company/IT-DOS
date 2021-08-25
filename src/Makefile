run: *.o linker.ld
	/root/opt/cross/bin/i686-elf-gcc -T linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib -lgcc boot.s kernel.c intToStr.c io.c keyboard.c 
	mv *.o ../obj
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso /home/michal/src/IT-DOS-C/bin/iso/
	qemu-system-i386 ITDOS.iso

build: *.o linker.ld
	/root/opt/cross/bin/i686-elf-gcc -T linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib -lgcc boot.s kernel.c intToStr.c io.c keyboard.c 
	mv *.o ../obj
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso /home/michal/src/IT-DOS-C/bin/iso/
