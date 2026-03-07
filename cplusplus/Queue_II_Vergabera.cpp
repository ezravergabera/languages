#include <stdio.h>
#include <stdlib.h>
#define MAX 20

struct queue
{
    int front;
    int middle;
    int rear;
    int items[MAX];
};

// To create an empty queue
struct queue *createQueue()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    q->middle = -1;
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
    return (((q->rear + 2) == q->front) || (q->front == 0 && q->rear == MAX - 2));
}

// To add an item at the rear of the queue
void addNum(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Stream is full\n");
        return;
    }

    if (q->rear == -1)
    {
        q->rear = (q->rear + 1);
        q->items[q->rear] = data;
    }
    else if (q->rear == MAX - 1)
    {
        q->items[1] = data;
    }
    else
    {
        q->rear = (q->rear + 2);
        q->items[q->rear] = data;
    }

    if (q->middle == MAX - 1)
    {
        q->middle = 1;
    }
    else
    {
        q->middle = (q->middle + 1);
    }

    if (q->front == -1)
    {
        q->front = q->rear;
        q->middle = q->rear;
    }
}

// To remove an item in front of the queue
int removeOldest(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Stream is empty\n");
        return -1;
    }
    int data = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->middle = -1;
        q->rear = -1;
    }
    else if (q->front == MAX - 1)
    {
        q->front = 1;
    }
    else
    {
        q->front = (q->front + 2);
    }

    if (q->middle == MAX - 1)
    {
        q->middle = 1;
    }
    else
    {
        q->middle = (q->middle + 1);
    }

    return data;
}

// To display the item at the front of the queue
void front(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Stream is empty\n");
        return;
    }
    printf("The data at the front is: %d\n", q->items[q->front]);
}

// To display the item at the rear of the queue
void rear(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    printf("The data at the rear is: %d\n", q->items[q->rear]);
}

// To check what position pointer middle is then checking if the stream is even or odd numbered
int median(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Stream is empty\n");
        return -1;
    }

    if (q->front == q->rear) // if there are only one number
    {
        printf("The median of the stream is %d", q->items[q->front]);
        printf("\n");
    }

    if ((q->middle % 2) == 1) // if the stream is even numbered where the number before middle is the first number and the number after middle is the second number
    {
        float median = ((float(q->items[q->middle - 1])) + (float(q->items[q->middle + 1]))) / 2;
        printf("The median of the stream is %.2f", median);
        printf("\n");
    }
    else // if the stream is odd numbered and the middle pointer is already pointing to the median
    {
        printf("The median of the stream is %d", q->items[q->middle]);
        printf("\n");
    }
}

// To display all the items starting from the front to the rear, left to right
void display(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Stream is empty\n");
        return;
    }
    int temp = q->front;

    printf("The current stream is:\n");
    if (q->front > q->rear)
    {
        while (q->front < MAX)
        {
            printf("%d ", q->items[q->front]);
            q->front = (q->front + 2);
        }
        q->front = 1;
        while (q->front < q->rear)
        {
            printf("%d ", q->items[q->front]);
            q->front = (q->front + 2);
        }
    }
    else
    {
        while (q->front <= q->rear)
        {
            printf("%d ", q->items[q->front]);
            q->front = (q->front + 2);
        }
    }
    printf("\n");
    q->front = temp;
}

int main()
{
    struct queue *stream = createQueue();
    median(stream);
    addNum(stream, 10);
    addNum(stream, 20);
    addNum(stream, 30);
    addNum(stream, 40);
    addNum(stream, 50);
    addNum(stream, 60);
    addNum(stream, 70);
    addNum(stream, 80);
    addNum(stream, 90);
    addNum(stream, 100);
    display(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    removeOldest(stream);
    addNum(stream, 110);
    addNum(stream, 120);
    display(stream);
    median(stream);
}