	global main
section .text

main:
	mov eax, 0x4
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data
	msg db "Hello, World",0xa
	len equ $ -msg
