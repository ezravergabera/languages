#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    double count;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
    struct node *middle;
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
    q->front = q->middle = q->rear = NULL;
    return q;
}

void printQueue(struct queue *q)
{
    struct node *temp = q->front;
    printf("The current stream is:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void add(struct queue *q, int data)
{
    struct node *temp = newNode(data);
    struct node *reartemp = q->rear;
    struct node *middletemp = q->middle;

    printf("You have added %d to the stream\n", temp->data);

    if (q->rear == NULL)
    {
        q->front = q->middle = q->rear = temp;
        q->front->count = q->middle->count = q->rear->count = 1;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    reartemp->count += 1;
    q->rear->count = reartemp->count;
    middletemp->count += 0.5;
    q->middle->count = middletemp->count;
    if ((q->rear->count - q->front->count) == q->middle->count)
    {
        q->middle = middletemp->next;
        q->middle->count = middletemp->count;
        q->middle->count += 1;
    }
}

void removeOldest(struct queue *q)
{
    if (q->front == NULL)
        return;

    struct node *temp = q->front;
    printf("TYou have removed %d to the stream\n", temp->data);
    printf("\n");
    q->rear->count -= 1;
    q->front = q->front->next;
    q->front->count -= 1;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
}

void median(struct queue *q)
{
    struct node *temp = q->front;
    struct node *temprear = q->rear;
    struct node *tempmiddle = q->middle;

    if (q->front == NULL)
    {
        printf("The stream is empty\n");
        return;
    }

    if (q->front == q->rear)
    {
        printf("The median of the stream is %d", temp->data);
        printf("\n");
    }

    if ((q->rear->count - q->middle->count) == 1.0)
    {
        printf("The median of the stream is %d", tempmiddle->data);
        printf("\n");
    }

    if ((temprear->count - tempmiddle->count) != 1.0)
    {
        double median = (tempmiddle->data + tempmiddle->next->data) / 2;
        printf("The median of the stream is %.2f", median);
        printf("\n");
        return;
    }
}

int main()
{
    struct queue *stream = createQueue();
    add(stream, 10);
    printQueue(stream);
    median(stream);
    add(stream, 20);
    printQueue(stream);
    median(stream);
    add(stream, 30);
    printQueue(stream);
    median(stream);
    add(stream, 40);
    printQueue(stream);
    median(stream);
    return 0;
}