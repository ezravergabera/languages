// queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct queue *createQueue()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct queue *q, int data)
{
    struct node *temp = newNode(data);

    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}

void dequeue(struct queue *q)
{
    if (q->front == NULL)
        return;

    struct node *temp = q->front;
    printf("The data %d has been dequeued from queue", temp->data);
    printf("\n");
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
}

void front(struct queue *q)
{
    struct node *temp = q->front;
    if (temp != NULL)
        printf("The front data is: %d\n", temp->data);
}

void rear(struct queue *q)
{
    struct node *temp = q->rear;
    if (temp != NULL)
        printf("The rear data is: %d\n", temp->data);
}

void printQueue(struct queue *q)
{
    struct node *temp = q->front;
    printf("The current queue is:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct queue *q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    printQueue(q);
    front(q);
    rear(q);
    dequeue(q);
    dequeue(q);
    front(q);
    rear(q);
    return 0;
}