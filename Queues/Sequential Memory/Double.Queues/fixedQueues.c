#include "fixedQueues.h"
#include <stdio.h>

Queue q;

int isEmpty(){
    if(q.end == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(){
    if(q.end == (MAX_SIZE - 1)){
        return 1;
    } else {
        return 0;
    }
}

void initializeQueue(){
    q.end = -1;
    q.start = 0;
    q.initialized = 1;
}

void enqueue(double number){
    if(q.initialized == 0){
        printf("ENQUEUE ERROR: Queue is not inicialized");
        return;
    }
    if(isFull()){
        printf("Error: Queue is full!");
        return;
    } 
    q.end++;
    q.array[q.end] = number;
}

void dequeue(){
    if(q.initialized == 0){
        printf("DEQUEUE ERROR: Queue is not inicialized");
        return;
    }
    if(isFull()){
        printf("DEQUEUE ERROR: Queue is full!");
        return;
    } 
    double aux = q.array[q.start];
    for(int i = q.start; i < q.end; i++){
        q.array[i] = q.array[i+1];
    }
    q.end--;   
    printf("Number: %.2lf dequeued", aux);
}

void printQueue(){
    if(q.initialized == 0){
        printf("PRINT QUEUE ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("PRINT QUEUE ERROR: Queue is empty!");
        return;
    } 
    printf("Queue:\n");
    for(int i = 0; i <= q.end; i++){
        printf("Number: %.2lf\n", q.array[i]);
        printf("-----------------------\n");
    }
}

void front(){
    if(q.initialized == 0){
        printf("FRONT ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("FRONT ERROR: Queue is empty!");
        return;
    } 
    printf("First number in queue:\n");
    printf("Number: %.2lf\n", q.array[q.start]);
}

void back(){
    if(q.initialized == 0){
        printf("BACK ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("BACK ERROR: Queue is empty!");
        return;
    } 
    printf("Last person in queue:\n");
    printf("Number: %.2lf\n", q.array[q.end]);
}

void size(){
    if(q.initialized == 0){
        printf("SIZE ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("Queue ocupped: 0");
        return;
    } 
    printf("Queue Size: %d\n", MAX_SIZE);
    printf("Queue ocupped: %d", (q.end + 1));
}

int search(int position){
    if (isEmpty()) {
        printf("SEARCH ERROR: Queue is empty!\n");
        return -1;
    }
    if (position <= 0 || position > q.end + 1) {
        printf("SEARCH ERROR: Invalid position!\n");
        return -1;
    }
    for (int i = 0; i <= q.end; i++) {
        if (q.array[i] == q.array[position - 1]) {
            printf("Number %.2lf found at position %d of %d\n", q.array[i], i, q.end);
            return i;
        }
    }
    printf("Number %.2lf not found in stack.\n", q.array[position - 1]);
    return -1;
}

void clear(){
    if (!isEmpty()){
        for (int i = 0; i < MAX_SIZE; i++){
            q.array[i] = 0;
        }
        q.end = -1;
        printf("Clear Successfull!");
    } else {
        printf("CLEAR ERROR: Queue is empty!\n");
    }
}