NASM = nasm
GCC = gcc
LDFLAGS = -nostdlib -no-pie -Wl,--entry=main -Wl,--build-id=none

.PHONY: all clean

all: hello-nasm hello-gas my_mkdir

hello-nasm: hello-nasm.o

hello-gas: hello-gas.o

my_mkdir: my_mkdir.o
hello-gas.o: hello.s
	$(GCC) -c -o $@ $<

hello-nasm.o: hello.asm
	$(NASM) -f elf64 -o $@ $<

my_mkdir.o: my_mkdir.asm
        $(NASM) -f elf64 -o $@ $<
clean:
	-rm -f hello-nasm.o hello-nasm
	-rm -f hello-gas.o hello-gas
	-rm -f *~
