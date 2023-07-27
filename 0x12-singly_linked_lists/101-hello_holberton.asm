global main
extern printf
main:
	mov edi, msg_to_print
	xor eax, eax
	call printf
	mov eax, 0
	ret
msg_to_print: db "Hello, Holberton\n", 0
