title This program is created by Ezra Vergabera which takes an input maximum of 100 characters and displays it back
.model small
.stack 100H
.data
    inputmsg db "Enter any word/character: $"
    inputbuffer db 100 dup('$')
.code

mov ax, @data
mov ds, ax

; displays input message
lea dx, inputmsg
mov ah, 9
int 21H

; points di to the memory address of inputbuffer
mov di, offset inputbuffer
input_loop:
    ; prompts for user input
    mov ah, 1
    int 21H

    ; checks whether the key is Enter. if it is, jump to end loop
    cmp al, 13
    je end_loop

    ; moves the input to the memory address
    mov [di], al

    ; increments to the next memory address
    inc di
    jmp input_loop

end_loop:
; moves the character '$' to the last memory address signifying the end of the string
mov al, '$'
mov [di], al

; loads the values in the memory address to dx register and is displayed
mov dx, offset inputbuffer
mov ah, 9
int 21H

; end of program
mov ah, 4CH
int 21H
int 20H
end