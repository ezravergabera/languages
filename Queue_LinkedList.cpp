#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node
{
    int data;
    struct Node *next;
};

// Queue structure
struct Queue
{
    struct Node *front;
    struct Node *rear;
};

// Function to create a new node
struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to create a queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to add an item to the queue
void enqueue(struct Queue *q, int data)
{
    struct Node *temp = newNode(data);

    // If queue is empty, then new node is front and rear both
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    // Add the new node at the end of queue and change rear
    q->rear->next = temp;
    q->rear = temp;
}

// Function to remove an item from queue
int dequeue(struct Queue *q)
{
    // If queue is empty, return NULL
    if (q->front == NULL)
        return -1;

    // Store previous front and move front one node ahead
    struct Node *temp = q->front;
    int item = temp->data;
    q->front = q->front->next;

    // If front becomes NULL, then change rear also as NULL
    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return item;
}

void front(struct Queue *q)
{
    struct Node *temp = q->front;
    if (temp != NULL)
    {
        printf("%d \n", temp->data);
    }
}

void rear(struct Queue *q)
{
    struct Node *temp = q->rear;
    if (temp != NULL)
    {
        printf("%d \n", temp->data);
    }
}

void printQueue(struct Queue *q)
{
    struct Node *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Queue *q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    printQueue(q);
    front(q);
    rear(q);
    printf("%d dequeued from queue\n", dequeue(q));
    printf("%d dequeued from queue\n", dequeue(q));
    front(q);
    rear(q);
    return 0;
}