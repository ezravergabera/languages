title This program is created by Ezra Vergabera which will add 2 input numbers
.model small
.stack 100H
.data
    inputmsg1 db 'Enter first number (Enter 0 first if single digit): $'
    inputmsg2 db 'Enter second number (Enter 0 first if single digit): $'
    result db 'Sum: $'

.code

mov ax, @data
mov ds, ax

; display input message
lea dx, inputmsg1
mov ah, 9
int 21H

; move first user input to high byte bx (bh)
mov ah, 1
int 21H
mov bh, al

; move second user input to low byte bx (bl)
mov ah, 1
int 21H
mov bl, al

; display newline character
mov ah, 2
mov dl, 0AH
int 21H

; display second input message
lea dx, inputmsg2
mov ah, 9
int 21H

; move first user input to high byte cx (ch)
mov ah, 1
int 21H
mov ch, al

; move second user input to low byte cx (cl)
mov ah, 1
int 21H
mov cl, al

; display new line character
mov ah, 2
mov dl, 0AH
int 21H

; adding of the ones digit
mov al, bl
mov ah, 00H     ; to ensure that ah is empty before using AAA
add al, cl      ; add first and second input's ones digit
aaa             ; adjust the sum
add ax, 3030H   ; hex to ascii conversion
mov bl, al      ; store the ones digit of the result to bl

; adding of the tens digit
mov al, ah      ; move the carry bit that is from AAA to al
mov ah, 00H
add al, bh      ; add the first input's tens digit to the carry bit
add al, ch      ; add the second input's tens digit to the sum
aaa             ; adjust the sum
add ax, 3030H   ; hex to ascii conversion
mov bh, al      ; store the tens digit of the result to bh
mov cl, ah      ; store the carry bit to cl (hundreds digit)

; display result message
lea dx, result
mov ah, 9
int 21H

; display the hundreds digit first
mov dl, cl
mov ah, 2
int 21H

; display the tens digit
mov dl, bh
mov ah, 2
int 21H

; display the ones digit
mov dl, bl
mov ah, 2
int 21H

; end of program
mov ah, 4cH
int 21H
int 20H
end