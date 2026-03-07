title Program to display "I can do all this through him who gives me strength." 11 times in DOSBOX
dosseg
.model small
.stack 100H

.data
    string db 'I can do all this through him who gives me strength.$'

.code
mov ax, @data
mov ds, ax
mov cx, 11

loop_start:
    lea dx, string
    mov ah, 9
    int 21H

    mov ah, 2
    mov dl, 0AH
    int 21H
    loop loop_start

mov ah, 4CH
int 21H
int 20H
end