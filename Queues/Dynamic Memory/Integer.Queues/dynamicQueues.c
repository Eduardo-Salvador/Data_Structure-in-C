#include <stdio.h>
#include <stdlib.h>
#include "dynamicQueues.h"

void initializeQueue(Queue *q){
    q->start = NULL;
    q->end = NULL;
}

int isEmpty(Queue *q){
    return (q->start == NULL);
}

void enqueue(Queue *q, int number) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = number;
        newNode->next = NULL;
        if (q->end == NULL) {        
            q->start = newNode;
            q->end = newNode;
        } else {                 
            q->end->next = newNode;
            q->end = newNode;
        }
    } else {
        printf("Memory allocation failed!\n");
    }
}

int dequeue(Queue *q) {
    if (!isEmpty(q)) {
        Node *temp = q->start;        
        int value = temp->data;       
        q->start = temp->next;        
        if (q->start == NULL) {       
            q->end = NULL;
        }
        free(temp);                   
        return value;                
    } else {
        printf("Queue is empty!\n");
        return -1; 
    }
}

int peek(Queue *q){
    if(!isEmpty(q)){
        return q->start->data;
    }
    return -1;
}

void list(Queue *q){
    if(!isEmpty(q)){
        printf("Queue:\n");
        Node *current = q->start;  
        while (current != NULL) {
            printf("%d\n", current->data);
            current = current->next;
        }
    } else {
        printf("Queue is empty!");
    }
}

int size(Queue *q){
    int count = 0;
    if(!isEmpty(q)){
        Node *current = q->start;  
        while (current != NULL) {
            count++;
            current = current->next;
        }
    }
    return count;
}