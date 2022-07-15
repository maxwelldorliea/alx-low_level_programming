; prints Hello, Holberton

global start

section .text:

   start:
	mov eax, 0x4
	mov ebx, 1
	mov ecx, message
	mov edx, msglen

	int 0x80

	mov eax, 0x1
	mov ebx, 0

	int 0x80


section .data:

	message: db "Hello, Holberton", 0xA
	msglen equ $-message
