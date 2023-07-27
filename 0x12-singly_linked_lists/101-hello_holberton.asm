section .data
	msg_to_print db "Hello, Holberton", 0
section .text
	global _main
extern printf
main:
	mov rdi, msg_to_print
	call printf
	mov eax, 60
	xor edi, edi
	syscall
