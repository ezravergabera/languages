#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("\nStack Overflow");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{
    if (isEmpty())
    {
        printf("\nStack is empty");
        exit(1);
    }
    int temp;
    temp = stack_arr[top];
    top -= 1;
    return temp;
}

int peek()
{
    if (isEmpty())
    {
        printf("\nStack underflow");
        exit(1);
    }
    return stack_arr[top];
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack_arr[i]);
    }
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    push(5);
    display();
    printf("%d ", data);
    data = peek();
    printf("%d ", data);
    return 0;
}