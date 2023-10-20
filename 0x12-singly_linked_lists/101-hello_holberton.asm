global main

section .txt

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, str
	mov rdx, str_len
	SYSCALL; call write

	mov rax, 0x3c;call exit
	mov rdi, 0; exit with 0
	SYSCALL;exit(0)
	
section .data
	str: DB "Hello, Holberton", 10
	str_len: EQU $ - str;equate str_len with len of string
