; prints Hello, Holberton

section .text:

extern printf
global main


  main:
	mov eax, 0x4
	mov ebx, 1
	mov ecx, message
	mov edx, msg_len

	int 0x80

	mov eax, 0x1
	mov ebx, 0

	int 0x80


section .data:

	message: db "Hello, Holberton", 0xA
	msg_len equ $-message
