title This program is created by Ezra Vergabera which prints "I can do all this through him who gives me strength." 11 times
.model small
.stack 100H
.code
    mov ah, 2
    mov cx, 11
    mov al, 1

; resets the loop
reset_loop:
    mov al, 1

print_loop1:
    ; resets al to 1 if al is 0
    cmp al, 0
    je reset_loop

    ; displays I
    mov dl, 49H
    int 21H
    mov dl, 20H
    int 21H

    ; displays can
    mov dl, 63H
    int 21H
    mov dl, 61H
    int 21H
    mov dl, 6EH
    int 21H
    mov dl, 20H
    int 21H

    ; displays do
    mov dl, 64H
    int 21H
    mov dl, 6FH
    int 21H
    mov dl, 20H
    int 21H

    ; displays all
    mov dl, 61H
    int 21H
    mov dl, 6CH
    int 21H
    mov dl, 6CH
    int 21H
    mov dl, 20H
    int 21H

    ; checks if cx >= 0, continues the display loop if true
    cmp cx, 0
    jne print_loop2
    cmp cx, 0
    je print_loop2

print_loop2:
    ; checks if al == 0, if true, climb back to previous print_loop
    cmp al, 0
    je print_loop1

    ; displays this
    mov dl, 74H
    int 21H
    mov dl, 68H
    int 21H
    mov dl, 69H
    int 21H
    mov dl, 73H
    int 21H
    mov dl, 20H
    int 21H

    ; displays through
    mov dl, 74H
    int 21H
    mov dl, 68H
    int 21H
    mov dl, 72H
    int 21H
    mov dl, 6FH
    int 21H
    mov dl, 75H
    int 21H
    mov dl, 67H
    int 21H
    mov dl, 68H
    int 21H
    mov dl, 20H
    int 21H

    ; displays him
    mov dl, 68H
    int 21H
    mov dl, 69H
    int 21H
    mov dl, 6DH
    int 21H
    mov dl, 20H
    int 21H

    cmp cx, 0
    jne print_loop3
    cmp cx, 0
    je print_loop3

print_loop3:
    ; checks if al == 0, if true, climb back to previous print_loop
    cmp al, 0
    je print_loop2

    ; displays who
    mov dl, 77H
    int 21H
    mov dl, 68H
    int 21H
    mov dl, 6FH
    int 21H
    mov dl, 20H
    int 21H

    ; displays gives
    mov dl, 67H
    int 21H
    mov dl, 69H
    int 21H
    mov dl, 76H
    int 21H
    mov dl, 65H
    int 21H
    mov dl, 73H
    int 21H
    mov dl, 20H
    int 21H

    cmp cx, 0
    jne print_loop4
    cmp cx, 0
    je print_loop4

print_loop4:
    ; displays me
    mov dl, 6DH
    int 21H
    mov dl, 65H
    int 21H
    mov dl, 20H
    int 21H

    ; displays strength.
    mov dl, 73H
    int 21H
    mov dl, 74H
    int 21H
    mov dl, 72H
    int 21H
    mov dl, 65H
    int 21H
    mov dl, 6EH
    int 21H
    mov dl, 67H
    int 21H
    mov dl, 74H
    int 21H
    mov dl, 68H
    int 21H
    mov dl, 2EH
    int 21H
    mov dl, 0AH
    int 21H

    ; decreases cx then checks if cx != 0, if true, sets the value of al to 0 to start climbing back up to the top of the loop
    dec cx
    cmp cx, 0
    jne top_of_loop

    ; ends loop if cx == 0
    cmp cx, 0
    je end_loop

top_of_loop:
    mov al, 0
    jne print_loop3

end_loop:
    mov ah, 4cH
    int 21H
    int 20H
end