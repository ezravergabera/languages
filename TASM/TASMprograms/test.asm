title This program is created by Ezra Vergabera which will add 2 input numbers
.model small
.stack 100H
.data
    inputmsg1 db 'Enter first number: $'
    inputmsg2 db 'Enter second number: $'
    result db 'Sum: $'

    inputbuffer1 db ?
    input1 dw 0
    inputbuffer2 db ?
    input2 dw 0
    sum dw ?
.code

mov ax, @data
mov ds, ax

lea dx, inputmsg1
mov ah, 9
int 21H

input_loop1:
    mov ah, 1
    int 21H
    cmp al, 13
    je end_loop1
    mov inputbuffer1, al
    
    mov ax, input1
    mov bx, 10
    mov ah, 0
    imul bx
    add ax, inputbuffer1
    mov input1, ax
    jmp input_loop1

end_loop1:
lea dx, inputmsg2
mov ah, 9
int 21H

input_loop2:
    mov ah, 1
    int 21H
    cmp al, 13
    je end_loop2
    mov inputbuffer2, al

    mov ax, input2
    mov bx, 10
    mov ah, 0
    imul bx
    add ax, inputbuffer2
    mov input2, ax
    jmp input_loop2

end_loop2:
mov ax, input1
add ax, input2
mov sum, ax

mov ah, 2
mov cx, 10
mov ax, sum

print_digit:
xor dx, dx
div cx
mov dl, al
int 21H
cmp dx, 0
jne print_digit

mov ah, 4cH
int 21H
int 20H
end