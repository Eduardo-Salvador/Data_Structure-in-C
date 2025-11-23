#include <stdio.h>
#include <stdlib.h>
#include "dynamicQueue.h"

void initializeQueue(Queue *q){
    q->start = NULL;
    q->end = NULL;
}

int isEmpty(Queue *q){
    return (q->start == NULL);
}

void enqueue(Queue *q, People *p) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->people = p;
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

People * dequeue(Queue *q) {
    if (!isEmpty(q)) {
        Node *temp = q->start;        
        People *value = temp->people;       
        q->start = temp->next;        
        if (q->start == NULL) {       
            q->end = NULL;
        }
        free(temp);                   
        return value;                
    } else {
        printf("Queue is empty!\n");
        return NULL; 
    }
}

People * peek(Queue *q){
    if(!isEmpty(q)){
        return q->start->people;
    }
    return NULL;
}

void list(Queue *q){
    if(!isEmpty(q)){
        printf("Queue:\n");
        Node *current = q->start;  
        while (current != NULL) {
            printf("%s %d %s\n", current->people->name, current->people->age, current->people->gender);
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