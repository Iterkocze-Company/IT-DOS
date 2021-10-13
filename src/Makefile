build:
	i686-elf-gcc -T boot/linker.ld -o ITDOS.bin -ffreestanding -O2 -nostdlib -lgcc boot/boot.s kernel/kernel.c 
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso ../bin/iso/

run:
	i686-elf-gcc -T boot/linker.ld -o ITDOS.bin -ffreestanding -nostdlib -lgcc boot/boot.s kernel/kernel.c 
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso ../bin/iso/
	qemu-system-i386 ITDOS.iso

debug:
	i686-elf-gcc -T boot/linker.ld -o ITDOS.bin -ffreestanding -g -nostdlib -lgcc boot/boot.s kernel/kernel.c 
	mv ITDOS.bin /home/michal/src/IT-DOS-C/bin/iso/boot/
	grub-mkrescue -o ITDOS.iso ../bin/iso/
	qemu-system-i386 -s -S ITDOS.iso

cls:
	rm ITDOS.iso
