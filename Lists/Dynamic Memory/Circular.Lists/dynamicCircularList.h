#ifndef DYNAMIC_CIRCULAR_LIST_H
#define DYNAMIC_CIRCULAR_LIST_H

typedef struct Node {
    float data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} CircularList;

void initializeList(CircularList *l);
int isEmpty(CircularList *l);
void insertAt(CircularList *l, float data, int position);
float removeAt(CircularList *l, int position);
void printList(CircularList *l);
void freeList(CircularList *l);

#endif