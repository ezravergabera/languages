#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 10

struct Queue
{
    int front;
    int rear;
    int items[MAX_QUEUE_SIZE];
};

// Function to create an empty queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q)
{
    return (q->front == -1 && q->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// Function to add an item to the queue
void enqueue(struct Queue *q, int item)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->items[q->rear] = item;
    if (q->front == -1)
    {
        q->front = q->rear;
    }
}

// Function to remove an item from the queue
int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    int item = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    }
    return item;
}

int front(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    printf("%d\n", q->items[q->front]);
}

int rear(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    printf("%d\n", q->items[q->rear]);
}

int main()
{
    struct Queue *t = createQueue();
    enqueue(t, 10);
    enqueue(t, 20);
    enqueue(t, 30);
    front(t);
    rear(t);
    printf("%d\n", isFull(t));
    return 0;
}