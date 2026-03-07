#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct
{
    char name[MAX_NAME];
    int age;
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name)
{
    int length = strnlen(name, MAX_NAME);
    unsigned int hashvalue = 0;
    for (int i = 0; i < length; i++)
    {
        hashvalue += name[i];
        hashvalue = (hashvalue * name[i]) % TABLE_SIZE;
    }
    return hashvalue;
}

bool init_hash_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
    // table is empty
}

bool hash_table_insert(person *p)
{
    if (p == NULL)
        return false;
    int index = hash(p->name);
    if (hash_table[index] != NULL)
    {
        return false;
    }
    hash_table[index] = p;
    return true;
}

person *hash_table_lookup(char *name)
{
    int index = hash(name);
    if (hash_table[index] != NULL &&
        strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0)
    {
        return hash_table[index];
    }
    else
    {
        return NULL;
    }
}

person *hash_table_delete(char *name)
{
    int index = hash(name);
    if (hash_table[index] != NULL &&
        strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0)
    {
        person *tmp = hash_table[index];
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
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
    printf("End\n");
}

int main()
{
    init_hash_table();
    print_table();

    person jacob = {.name = "Jacob", .age = 256};
    person kate = {.name = "Kate", .age = 27};
    person mpho = {.name = "Mpho", .age = 14};

    hash_table_insert(&jacob);
    hash_table_insert(&kate);
    hash_table_insert(&mpho);
    print_table();

    person *tmp = hash_table_lookup("Mpho");

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %s\n", tmp->name);
    }

    tmp = hash_table_lookup("Jason");

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %s\n", tmp->name);
    }

    hash_table_delete("Mpho");

    tmp = hash_table_lookup("Mpho");

    if (tmp == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Found %s\n", tmp->name);
    }

    print_table();

    // printf("Jacob => %u\n", hash("Jacob"));
    // printf("Natalie => %u\n", hash("Natalie"));
    // printf("Tobogo => %u\n", hash("Tobogo"));
    // printf("Jose => %u\n", hash("Jose"));
    // printf("Arjie => %u\n", hash("Arjie"));
    // printf("Pauline => %u\n", hash("Pauline"));
    // printf("Joseph => %u\n", hash("Joseph"));
    // printf("Mary => %u\n", hash("Mary"));
    return 0;
}
