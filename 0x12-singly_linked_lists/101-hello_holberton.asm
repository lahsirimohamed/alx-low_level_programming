section .data
	msg_to_print db "Hello, Holberton", 0
section .text
	global _main
extern printf
main:
	mov edi, msg_to_print
	call printf
	xor eax, eax
	mov eax, 0
	ret
