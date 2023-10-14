global _start

section .data
    msg db "Hello world!", 0x0A
    msglen equ $ - msg

section .text
_start:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, msg
    mov edx, msglen
    int 0x80

    mov eax, 0x1
    mov ebx, 0x0
    int 0x80