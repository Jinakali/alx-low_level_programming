section .data
	hello db "Hello, Holberton",0

section .text
	global main
	extern printf
	extern exit

main:
	;call printf
	push hello;push the address of the string onto the stack
	call printf
	add esp, 4;adjust the stack pointer

	;exit the program
	mov eax, 1;syscall for exit(1)
	xor ebx, ebx;status code
	int 0x80;invoke the syscall
