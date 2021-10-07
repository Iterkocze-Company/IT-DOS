build:
	/root/opt/cross/bin/i686-elf-gcc -T boot/linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib -lgcc boot/boot.s kernel/kernel.c 
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso /home/michal/src/IT-DOS-C/bin/iso/

run:
	/root/opt/cross/bin/i686-elf-gcc -T boot/linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib -lgcc boot/boot.s kernel/kernel.c 
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso /home/michal/src/IT-DOS-C/bin/iso/
	qemu-system-i386 ITDOS.iso
