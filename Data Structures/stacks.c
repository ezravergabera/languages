#include <stdio.h>
#include <stdlib.h>


struct stack {
	int top;
	unsigned size;
	int *array;
};

struct stack *createStack(unsigned size) {
	struct stack *stack = (struct stack*)malloc(sizeof(struct stack));
	stack->top = -1;
	stack->size = size;
	stack->array = (int*)malloc(stack->size * sizeof(int));
	return stack;
}

int isFull(struct stack *stack) {
	return stack->top == stack->size-1;
}

int isEmpty(struct stack *stack) {
	return stack->top == -1;
}

void push(struct stack *stack, int element) {
	if(isFull(stack))
		return;
	stack->array[++stack->top] = element;
}

int pop(struct stack *stack) {
	if(isEmpty(stack))
		return -1;
	return stack->array[stack->top--];
}

int peek(struct stack *stack) {
	if(isEmpty(stack))
		return -1;
	return stack->array[stack->top];
}

void display(struct stack *stack) {
	if(isEmpty(stack))
		return;
	int i = stack->top;
	int temp = stack->top;
	printf("\n-------------------------\n");
	while(i != -1) {
		int data = pop(stack);
		printf("%d\n", data);
		--i;
	}
	stack->top = temp;
	printf("(%d elements)", stack->top+1);
}


int main() {
	struct stack *stack = createStack(10);
	int temp;
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	temp = peek(stack);
	printf("%d\n", temp);
	push(stack, 40);
	temp = peek(stack);
	printf("%d\n", temp);
	pop(stack);
	push(stack, 50);
	display(stack);
	display(stack);
	return 0;
}
