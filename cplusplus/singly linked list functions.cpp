// singly linked lists   insert_first, insert_end, display functions
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} *head, *current, *tail;

void insert_first(int);
void insert_end(int);
void display(void);

int main()
{
	insert_end(10);
	insert_first(10);
	insert_end(30);
	insert_first(100);
	insert_first(20);
	insert_end(500);
	insert_end(300);
	display();
}

void insert_first(int element)
{
	current = (struct node *)malloc(sizeof(struct node));
	current->data = element;

	if (head == NULL)
	{
		current->next = NULL;
		tail = current;
	}
	else
	{
		current->next = head;
	}
	head = current;
}

void insert_end(int element)
{
	current = (struct node *)malloc(sizeof(struct node));
	current->data = element;
	current->next = NULL;

	if (head == NULL)
	{
		tail = current;
		head = current;
	}
	else
	{
		tail->next = current;
		tail = current;
	}
}

void display()
{
	current = head;

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}