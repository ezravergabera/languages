#include <stdlib.h>
#include <stdio.h>

/*int main(){
    typedef struct {
        int* array;
    } Data;

    Data x;
    Data y;

    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);

    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;
    
    y.array[0] = 9;
    y.array[1] = 9;
    y.array[2] = 9;
    y.array[3] = 9;
    y.array[4] = 9;

    Data pt = x;
    x = y;

    for (int i = 0; i < 5; i++)
        printf("x.array[%d] = %d\n", i, x.array[i]);

    x.array[0] = 25;

    x = pt;

    for (int i = 0; i < 5; i++)
        printf("x.array[%d] = %d\n", i, x.array[i]);
    for (int i = 0; i < 5; i++)
        printf("y.array[%d] = %d\n", i, y.array[i]);

    typedef struct {
        int x;
        int y;
    } Point;

    Point p1;

    p1.x = 5;
    p1.y = 10;

    printf("(%d, %d)\n", p1.x, p1.y);

    Point* p2;

    p2 = malloc(sizeof(Point));

    (*p2).x = 2;
    p2->y = 13;

    printf("(%d, %d)", (*p2).x, p2->y);

    free(p2);
}*/

typedef struct {
    int x;
    int y;
} Point;

int main() {
    int length = 3;

    Point *array;

    array = malloc(sizeof(Point) * length);

    array[0].x = 1;
    array[0].y = 1;

    array[1].x = 2;
    array[1].y = 2;

    array[2].x = 3;
    array[2].y = 3;

    printf("Array..... \n");
    for (int i = 0; i < length; i++)
        printf("%d, %d\n", array[i].x, array[i].y);
    printf("\n");

    free(array);
}