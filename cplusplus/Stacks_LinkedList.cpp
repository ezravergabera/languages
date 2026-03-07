#include <stdio.h>
#include <stdlib.h>

struct node
{
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
    if (isEmpty())
    {
        top = (struct node *)malloc(sizeof(struct node)); // allocates memory for the first node which is also the top node
        top->data = element;
        top->next = NULL; // because it is the first node or the bottom stack, it should point to NULL
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node)); // allocates memory for a temporary node which would be the next stack
        temp->data = element;
        temp->next = top; // the next stack must point to the top stack
        top = temp;       // then the temp node must become the new top
    }
}

void pop() // a function that removes the top node and prints its data
{
    if (isEmpty()) // to check the stack underflow condition
    {
        printf("\nStack is empty");
    }
    else
    {
        temp->data = top->data; // the data of temp will become the data of top
        top = top->next;        // the node that the top is pointing to will become the new top
        printf("\nThe deleted value is %d", temp->data);
    }
}

void peek() // prints the data of the top stack
{
    if (isEmpty())
    {
        printf("\nStack underflow");
    }
    else
    {
        printf("\nThe value of the top stack is %d", top->data);
    }
}

void display() // prints all the data starting from the top stack to the bottom stack
{
    temp = top;
    printf("\nCurrent Stack:\n");
    while (temp != NULL) // to check if the temp pointer has already passed the final stack
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    push(5);
    peek();
    display();
    return 0;
}