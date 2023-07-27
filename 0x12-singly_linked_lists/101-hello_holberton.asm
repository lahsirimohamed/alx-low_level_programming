section .data
msg_to_print db "Hello, Holberton", 0
section .text
global _start

_start:
mov rdi, msg_to_print
call printf
mov rax, 60
xor rdi, rdi
syscall
