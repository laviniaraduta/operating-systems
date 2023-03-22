section .rodata

path db "./my_dir", 0

section .text

global main

main:
    	push rbp
   	mov rbp, rsp
	
	mov rax, 53
	mov rdi, path
	mov rsi, 666	
	syscall

 	xor rax, rax
	leave
	ret
