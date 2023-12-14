#include <stdio.h>

int main()
{
    int array_size, temp;

    // input
    printf("\nEnter the size of array: ");
    scanf("%d", &array_size);

    // array declaration
    int numbers[array_size];

    // input - for loop to input elements to the array
    printf("\nEnter the %d elements\n", array_size);
    for (int i = 0; i < array_size; i++)
    {
        printf("\nEnter the value (%d): ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // process - nested for loop to compare each number to each number and move them as needed
    for (int i = 0; i < array_size; i++) // this for loop represents the previous number
    {
        for (int n = i + 1; n < array_size; n++) // this for loop represents the next number
        {
            if (numbers[i] > numbers[n]) // if the previous number is greater than the next number
            {
                // the line of codes to swap the lesser number to the greater number is done
                temp = numbers[i];       // the greater value number is assigned to temp
                numbers[i] = numbers[n]; // the lesser value is assigned to the place of the greater value
                numbers[n] = temp;       // the greater value is moved to the lesser value's position
            }
        }
    }

    // output - for loop to output each element in the sorted array
    printf("\nThe sorted array is: \n");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", numbers[i]);
    }
}