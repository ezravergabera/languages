#include <stdio.h>
#include <stdlib.h>

struct node
{
    int count;
    int data;
    struct node *next;
} *top, *temp;

int isEmpty() // a function that returns 1 if the stack is empty and returns 0 if not
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(int element) // a function that pushes an element at the top of the stack
{
    if (isEmpty()) //
    {
        top = (struct node *)malloc(sizeof(struct node));
        top->count = 0;
        top->data = element;
        top->next = NULL;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->count = top->count;
        temp->data = element;
        temp->next = top;
        top = temp;
    }
    top->count += 1;
}

int pop()
{
    if (isEmpty())
    {
        printf("\nStack is empty");
    }
    else
    {
        temp->data = top->data;
        top = top->next;
        return temp->data;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("\nStack underflow");
    }
    else
    {
        return top->data;
    }
}

void print()
{
    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
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
    print();
    printf("%d ", data);
    data = peek();
    printf("%d ", data);
    return 0;
}