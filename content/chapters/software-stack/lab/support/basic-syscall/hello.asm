; SPDX-License-Identifier: BSD-3-Clause
section .bss
	buffer resb 256
	len equ 256

section .rodata

hello db "Hello, world!", 10, 0

section .text

global main

main:
    push rbp
    mov rbp, rsp

    ; Call write(1, "Hello, world!\n", 14).
    ; rax <- __NR_write (index of write syscall: 1)
    ; rdi <- first syscall argument (fd: 1)
    ; rsi <- second syscall argument (buffer: hello)
    ; rdx <- third syscall argument (length: 14)
    mov rdi, 1
    mov rsi, hello
    mov rdx, 14
    mov rax, 1
    syscall



; read(0, buffer, 256).
    ; rax <- __NR_read (index of read syscall: 0)
    ; rdi <- first syscall argument (fd: 0)
    ; rsi <- second syscall argument (buffer: buffer)
    ; rdx <- third syscall argument (length: len)
    mov rdi, 0
    mov rsi, buffer
    mov rdx, len
    mov rax, 0
    syscall


; write(1, buffer, size).
    ; rax <- __NR_write (index of write syscall: 1)
    ; rdi <- first syscall argument (fd: 1)
    ; rsi <- second syscall argument (buffer: buffer)
    ; rdx <- third syscall argument (length: size - rax)
    mov rdi, 1
    mov rsi, buffer
    mov rdx, rax
    mov rax, 1
    syscall

; sys_pause
	mov rax, 34
	syscall
    ; Call exit(0).
    ; rax <- __NR_exit (index of exit syscall: 60)
    ; rdi <- first syscall argument (error_code: 0)
    mov rdi, 0
    mov rax, 60
    syscall

    xor rax, rax
    leave
    ret
