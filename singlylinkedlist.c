#include <stdio.h>
#include <stdlib.h>

struct node // creating the structure for nodes
{
    int data;
    struct node *next;
} * head, *current, *tail, *before, *after, *temp; // pointers to be used in this struct

void insert_first(int);
void insert_end(int);
void display(void);
void delete_first(void);
void delete_last(void);
void insert_in_index(int, int); // function declarations

int main()
{
    delete_last();  // checking if the code will work even when delete_last function is called first
    delete_first(); // same as delete_last
    insert_end(10); // same purpose as delete_last and delete_first, to check if it can add a node when insert_end function is used first
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
    insert_in_index(25, 7);   // to check if it is possible to insert at the last index
    delete_last();            // deletes the node in the last index
    insert_in_index(65, 3);   // inserting 65 at index 3
    insert_in_index(2500, 0); // inserting 2500 at index 0, to check if the code will run even if index is 0
    display();
}

void insert_first(int element) // already explained by the prof
{
    current = (struct node *)malloc(sizeof(struct node)); // allocating memory for a new node
    current->data = element;                              // assigning the value of element to the data of the current node

    if (head == NULL) // to check if there is no existing node yet
    {
        current->next = NULL; // next would be NULL because the current node is the first node created
        tail = current;       // current would be the tail because it is the end node of the linked list
    }
    else // to check if there are already existing nodes
    {
        current->next = head; // our current node's next will point to the head which is the existing node
    }
    head = current; // the current will become the new head node
}

void insert_end(int element) // already explained by the prof
{
    current = (struct node *)malloc(sizeof(struct node)); // allocating memory for a new node
    current->data = element;                              // the element that is passed to the parameter is assigned to the data of the node
    current->next = NULL;                                 // the next of the current node is assigned to NULL because the new node will be added as the tail of the linked list

    if (head == NULL) // same purpose as the if statement in insert_start
    {
        tail = current;
        head = current; // because the node is the first node created, the node will be the head and the tail at the same time
    }
    else // to perform instructions if there are already existing nodes
    {
        tail->next = current; // the tail's next would point to the added node because the added node will become the new tail as seen in (line 70)
        tail = current;
    }
}

void delete_first() // the pointer would start at the first index which is the head and delete it
{
    if (head != NULL) // to ensure that the code would not run if there are no existing nodes
    {
        current = head;       // the current will become the head
        current->data = NULL; // the data in head/current will become NULL
        head = current->next; // the node that the current is pointing to will become the new head
    }
}

void delete_last() // the pointer would start from the head and check for the node that has NULL for its next
{
    if (head == tail) // to check for a single node and delete it. We would know that it is a single node if the head and the tail is the same node
    {
        head = NULL;
        tail = NULL;
    }
    else if (head != NULL) // the argument is added for readability but is unnecessary for now I think
    {
        current = head;               // the current will become the head as our search will start from the head
        while (current->next != NULL) // to ensure that the code will stop when the current has reached the tail node where its next is NULL
        {
            before = current;        // the previous node is assigned to the pointer named before so that it can be accessed later
            current = current->next; // the current would proceed to become the next node it is pointing to
        }
        current->data = NULL; // the current node which is also the tail node will have its data deleted
        before->next = NULL;  // the previous node before the current node will become the tail node (line 101) therefore its next must be NULL
        tail = before;
    }
}

void insert_in_index(int element, int index) // inserting an element at a given index
{
    temp = (struct node *)malloc(sizeof(struct node)); // allocating memory for a new node that we will call temp short for temporary
    temp->data = element;                              // the element that is passed in the parameter will be assigned to the node's data
    current = head;                                    // the current pointer will serve as the cursor and the search will start from the head same as what is done in delete_last
    int i = 0;

    if (current == NULL) // to check if there is no node created yet
    {
        temp->next = NULL; // the temp will become the tail node and the head node (lines 115, 116) therefore its next must be NULL
        head = temp;
        tail = temp;
    }
    else
    {
        if (index != 0) // to check if the passed value of index is not equal to 0 or is greater than in a sense
        {
            while (i != index) // to ensure that the code stops at the desired index
            {
                before = current;        // the current node will be assigned to the previous node before so that it can be accessed later
                current = current->next; // the current node will become the next node that the current is pointing to, this will also move the cursor pointer
                after = current;         // the node next to the previous node (current node) will be assigned to the pointer named after
                i++;
            }
            before->next = temp; // the previous node before the node that has the desired index will point to the inserted temp node
            temp->next = after;  // the inserted temp node will point to the next node named after
        }
        else if (index == 0) // if the index passed is equal to zero, the function insert_first will be used
        {
            insert_first(element);
        }
        else // to ensure that when the while loop has reached the last index, the temp node will become the tail therefore performing the insert_end function
        {
            insert_end(element);
        }
    }
}

void display() // explained by the prof
{
    current = head; // current pointer will become the cursor and the traverse will start at the head node

    while (current != NULL) // to ensure that the code will stop at the tail
    {
        printf("%d\n", current->data);
        current = current->next; // to move the cursor pointer to the next node
    }
}