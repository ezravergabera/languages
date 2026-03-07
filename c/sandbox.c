#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} * head, *current, *tail, *before, *after, *temp;

void insert_first(int);
void insert_end(int);
void display(void);
void delete_first(void);
void delete_last(void);
void insert_in_index(int, int);

int main()
{
	delete_last();
	delete_first();
	insert_end(10);
	insert_first(10);
	insert_end(30);
	insert_first(100);
	insert_first(20);
	delete_last();
	insert_end(500);
	delete_last();
	insert_end(500);
	insert_end(300);
	insert_first(25);
	insert_in_index(25, 7);
	delete_last();
	insert_in_index(65, 3);
	insert_in_index(2500, 0);
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

void delete_first()
{
	if (head != NULL)
	{
		current = head;
		current->data = NULL;
		head = current->next;
	}
}

void delete_last()
{
	if (head == tail)
	{
		head = NULL;
		tail = NULL;
	}
	else if (head != NULL)
	{
		current = head;
		while (current->next != NULL)
		{
			before = current;
			current = current->next;
		}
		current->data = NULL;
		before->next = NULL;
		tail = before;
	}
}

void insert_in_index(int element, int index)
{
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = element;
	current = head;
	int i = 0;

	if (current == NULL)
	{
		temp->next = NULL;
		head = temp;
		tail = temp;
	}
	else
	{
		if (index != 0)
		{
			while (i != index)
			{
				before = current;
				current = current->next;
				after = current;
				i++;
			}
			before->next = temp;
			temp->next = after;
		}
		else if (index == 0)
		{
			insert_first(element);
		}
		else
		{
			insert_end(element);
		}
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