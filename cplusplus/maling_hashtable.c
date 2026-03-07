#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define TABLE_SIZE 5

typedef struct value
{
    int data;
} number;

number *hash_table[TABLE_SIZE];

int hash1(int key)
{
    return key % TABLE_SIZE;
}

int hash2(int key)
{
    return (7 - (key % 7));
}

bool init_hash_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
    // table is empty
}

bool hash_table_insert(number *key)
{
    if (key == NULL)
    {
        return false;
    }
    for (int i = 0; i < 100; i++)
    {
        int index = (hash1(key->data) + (i * hash2(key->data))) % TABLE_SIZE;
        if (hash_table[index] == NULL)
        {
            hash_table[index] = key;
            return true;
        }
    }
    printf("Hash Table is full!\n");
    return false;
}

number *hash_table_search(int value)
{
    int index = hash1(value);
    if (hash_table[index] != NULL &&
        (hash_table[index]->data == value))
    {
        return hash_table[index];
    }
    else
    {
        return NULL;
    }
}

number *hash_table_delete(int value)
{
    int index = hash1(value);
    if (hash_table[index] != NULL &&
        (hash_table[index]->data == value))
    {
        number *tmp = hash_table[index];
        hash_table[index] = NULL;
        return tmp;
    }
    else
    {
        return NULL;
    }
}

void print_table()
{
    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL)
        {
            printf("\t%i\t---\n", i);
        }
        else
        {
            printf("\t%i\t%i\n", i, hash_table[i]->data);
        }
    }
    printf("End\n");
}

int main()
{
    init_hash_table();
    print_table();

    number first = {.data = 44};
    number second = {.data = 35};
    number third = {.data = 27};
    number fourth = {.data = 6};
    number fifth = {.data = 2};
    number sixth = {.data = 27};

    hash_table_insert(&first);
    hash_table_insert(&second);
    hash_table_insert(&third);
    hash_table_insert(&fourth);
    hash_table_insert(&fifth);
    hash_table_insert(&sixth);

    print_table();

    number *tmp = hash_table_search(44);

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %i\n", tmp->data);
    }

    tmp = hash_table_search(56);

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %i\n", tmp->data);
    }

    print_table();

    hash_table_delete(44);

    tmp = hash_table_search(44);

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %i\n", tmp->data);
    }
}