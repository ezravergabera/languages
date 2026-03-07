// queue using array
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct queue
{
    int front;
    int rear;
    int items[MAX];
};

// To create an empty queue
struct queue *createQueue()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// To check if the queue is empty
int isEmpty(struct queue *q)
{
    return (q->rear == -1 && q->front == -1);
}

// To check if the queue is full
int isFull(struct queue *q)
{
    return ((q->rear + 1) % MAX == q->front);
}

// To add an item at the rear of the queue
void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = data;
    if (q->front == -1)
    {
        q->front = q->rear;
    }
}

// To remove an item in front of the queue
int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    int data = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % MAX;
    }
    return data;
}

// To display the item at the front of the queue
int front(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    printf("The data at the front is: %d\n", q->items[q->front]);
}

// To display the item at the rear of the queue
int rear(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    printf("The data at the rear is: %d\n", q->items[q->rear]);
}

// To display all the items starting from the front to the rear, left to right
void display(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    struct queue *temp = q; // initializes a new temporary queue which gets the same data of the pointed queue
    printf("The current queue is:\n");
    while (temp->front != (temp->rear + 1) % MAX) // the loop will only stop when the front of the temp queue is equal to the last queue position
    {
        printf("%d ", temp->items[temp->front]); // prints the data that the index front points to
        temp->front = (temp->front + 1) % MAX;   // moves the front one step closer to the rear
    }
    free(temp); // frees the temp queue as it already has done its job
}

int main()
{
    struct queue *lineOfPeople = createQueue();
    enqueue(lineOfPeople, 10);
    enqueue(lineOfPeople, 20);
    enqueue(lineOfPeople, 30);
    front(lineOfPeople);
    rear(lineOfPeople);
    printf("%d\n", isFull(lineOfPeople));
    display(lineOfPeople);
    return 0;
}