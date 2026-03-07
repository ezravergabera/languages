title This program is created by Ezra Vergabera which will display the even numbers of the input
.model small
.stack 100H
.data
    inputmsg db 'Enter a number (maximum of 99): $'
    input dw 0

.code
mov ax, @data
mov ds, ax

; displays input message
lea dx, inputmsg
mov ah, 9
int 21H

; initializes cx to 0
mov cx, 0
input_loop:
    ; prompts for user input
    mov ah, 1
    int 21H

    ; checks whether the key is Enter. if it is, jump to end loop
    cmp al, 13
    je end_loop

    ; ascii to numerical value conversion
    sub al, 30H

    ; to ensure that only the lower byte (al) has value
    mov ah, 00H

    ; increments the counter for the input_to_number loop
    inc cx

    ; pushes the input to the stack
    push ax
    jmp input_loop

end_loop:

mov input, 0

; intializes bx to 1, representing the ones digit
mov bx, 1
input_to_number:
    ; pop the most recent number
    pop ax

    ; ax multiplied by bx
    mul bx

    ; to ensure that only the lower byte (al) has value
    mov ah, 00H

    ; add ax to input
    add input, ax

    ; adjust the values to its correct BCD format
    aaa

    ; multiply the value of bx by 10, moving to the next unit place
    mov ax, 10
    mul bx
    mov bx, ax
    loop input_to_number

; move the value of input to cx
mov cx, input
output_loop:
    ; check whether cx is 0, if true, jump to end of output
    cmp cx, 0
    je end_output_loop

    ; check whether the least significant bit is equal to 1, if true, jump to oddnum
    test cx, 1
    jnz oddnum

    ; resets the value of dx to 0
    mov dx, 0

    ; moves the value of cx to ax
    mov ax, cx
    mov bx, 10

    ; divides ax by bx, quotient is found in ax register and the remainder is found in the dx register
    idiv bx

    ; stores the value of the remainder to bx
    mov bx, dx

    ; checks whether ax is negative, if true, skips the number
    cmp ax, 0
    jl print_ones_digit

    ; checks whether ax is 0, if true, skips the number
    cmp ax, 0
    je print_ones_digit

    ; displays the tens digit
    add ax, 30H
    mov dl, al
    mov ah, 2
    int 21H

print_ones_digit:
    ; overwrites the dx register with the stored remainder and prints it
    mov dx, bx
    add dx, 30H
    mov dl, dl
    mov ah, 2
    int 21H

    mov dl, 20H
    int 21H

oddnum: ; skips odd numbers
    dec cx
    jmp output_loop

end_output_loop:
; prints the '0' character as 0 is also an even number
mov dl, '0'
mov ah, 2
int 21H

; end of program
mov ah, 4CH
int 21H
int 20H
end