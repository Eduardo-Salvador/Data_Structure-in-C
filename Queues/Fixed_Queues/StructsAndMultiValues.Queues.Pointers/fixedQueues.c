#include "fixedQueues.h"
#include <stdio.h>

void queue(Queue *q){
    q->end = -1;
    q->start = 0;
}

int isEmpty(Queue *q){
    if(q->end == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(Queue *q){
    if(q->end == (MAX_SIZE - 1)){
        return 1;
    } else {
        return 0;
    }
}

void enqueue(Queue *q, Person p){
    if(!isFull(q)){
        if (&p == NULL) {
            printf("ENQUEUE ERROR: Person is NULL!\n");
            return;
        } else {
            q->end++;
            q->array[q->end] = p;
        }
    } else {
        printf("Error: Queue is full!");
    }
}

void dequeue(Queue *q){
    if(!isEmpty(q)){
        Person aux = q->array[q->start];
        for(int i = q->start; i < q->end; i++){
            q->array[i] = q->array[i+1];
        }
        q->end--;   
        printf("Person: %s dequeued", aux.name);
    } else {
        printf("Error: Queue is empty!");
    }
}

void peek(Queue *q){
    if(!isEmpty(q)){
        printf("First person:\n");
        Person p = q->array[0];
        printf("Name:%s\n", p.name);
        printf("Age: %d\n", p.age);
        printf("Gender: %c\n", p.gender);
        
    } else {
        printf("Error: Queue is empty!");
    }
}

void list(Queue *q){
    if(!isEmpty(q)){
        printf("Queue:\n");
        for(int i = 0; i <= q->end; i++){
            Person p = q->array[i];
            printf("Person %d\n", i+1);
            printf("Name: %s\n", p.name);
            printf("Age: %d\n", p.age);
            printf("Gender: %c\n\n", p.gender);
        }
    } else {
        printf("Queue Empty");
    }
}

void size(Queue *q){
    printf("Queue Size: %d\n", MAX_SIZE);
    if(!isEmpty(q)){
        printf("Queue ocupped: %d", (q->end + 1));
    } else {
        printf("Queue ocupped: 0");
    }
}