#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct DataItem {
  int data, key, is_empty;
};

struct DataItem *hashArray[SIZE];

struct DataItem *createDataItem() {
  struct DataItem *hashItem =
      (struct DataItem *)malloc(sizeof(struct DataItem));
  hashItem->data = -1;
  hashItem->key = -1;
  hashItem->is_empty = 1;
  for (int i = 0; i < SIZE; i++) {
    hashArray[i] = hashItem;
  }
  return NULL;
}

int hashCode1(int key) { return (key % SIZE); }
int hashCode2(int key) {
  int prime = 7;
  return (prime - (key % prime));
}

void insert(int key, int data) {
  struct DataItem *item = (struct DataItem *)malloc(sizeof(struct DataItem));
  item->data = data;
  item->key = key;
  item->is_empty = 0;

  int hashIndex = hashCode1(key);
  int initialIndex = hashIndex;
  int i = 1; // iteration for double hashing

  while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
    if (hashArray[hashIndex]->key == key) {
      hashArray[hashIndex]->data = data;
      return;
    }

    hashIndex = (hashCode1(key) + i * hashCode2(key)) % SIZE;
    i++;

    if (hashIndex == initialIndex) {
      printf("The Table is full.\n");
      return;
    }
  }
  hashArray[hashIndex] = item;
  return;
}

int search(int key) {
  int hashIndex = hashCode1(key);
  int initialIndex = hashIndex;
  while (hashArray[hashIndex] != NULL) {
    if (hashArray[hashIndex]->key == key) {
      printf("%d\n", hashIndex);
      return 1;
    }
    hashIndex = (hashIndex + 1) % SIZE;
    if (hashIndex == initialIndex) {
      printf("Element not found.\n");
      return 0;
    }
  }
  return 0;
}

void delete (int key) {
  int hashIndex = hashCode1(key);
  int initialIndex = hashIndex;
  while (hashArray[hashIndex] != NULL) {
    if (hashArray[hashIndex]->key == key) {
      hashArray[hashIndex]->key = -1;
      hashArray[hashIndex]->is_empty = 1;
      printf("Successfully deleted key %d.\n", key);
      return;
    }
    hashIndex = (hashIndex + 1) % SIZE;
    if (hashIndex == initialIndex) {
      printf("Key %d is not in the table.\n", key);
      return;
    }
  }
  return;
}

int main() {

  struct DataItem *hashItem = createDataItem();
  insert(1234, 90);
  insert(4214, 100);
  insert(1512, 110);
  insert(1244, 120);
  insert(15214, 130);
  insert(4124, 140);
  insert(4123, 150);
  insert(4125, 160);
  insert(8669, 170);
  insert(7427, 180);
  delete (7427);
  insert(7427, 190);
  delete (5234);
  delete (3);
  insert(53, 180);
  search(1234);
  search(4214);
  search(1512);
  search(1244);
  search(15214);
  search(4124);
  search(4123);
  search(4125);
  search(8669);
  search(7427);
  return 0;
}