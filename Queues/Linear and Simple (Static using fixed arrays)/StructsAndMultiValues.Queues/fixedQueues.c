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

void enqueue(Person p){
    if(q.initialized == 0){
        printf("ENQUEUE ERROR: Queue is not inicialized");
        return;
    }
    if(q.initialized == 0){
        printf("ENQUEUE ERROR: Person is not inicialized.");
        return;
    }
    if(isFull()){
        printf("Error: Queue is full!");
        return;
    } 
    q.end++;
    p.id = q.end + 1;
    q.array[q.end] = p;
    p.initialized = 0;
}

void dequeue(){
    Person p = q.array[q.start];
    if(q.initialized == 0){
        printf("DEQUEUE ERROR: Queue is not inicialized");
        return;
    }
    if(p.initialized == 0){
        printf("DEQUEUE ERROR: Person is not inicialized.");
        return;
    }
    if(isFull()){
        printf("DEQUEUE ERROR: Queue is full!");
        return;
    } 

    Person aux = q.array[q.start];
    for(int i = q.start; i < q.end; i++){
        q.array[i] = q.array[i+1];
    }
    q.end--;   
    printf("Person: %s dequeued", aux.name);
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
        Person p = q.array[i];
        printf("Person %d\n", i+1);
        printf("Name: %s\n", p.name);
        printf("Age: %d\n", p.age);
        printf("Gender: %c\n", p.gender);
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
    printf("First person in queue:\n");
    Person p = q.array[0];
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %c\n", p.gender);
}

void back(){
    if(q.initialized == 0){
        printf("FRONT ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("FRONT ERROR: Queue is empty!");
        return;
    } 
    printf("Last person in queue:\n");
    Person p = q.array[q.end];
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %c\n", p.gender);
}

void size(){
    printf("Queue Size: %d\n", MAX_SIZE);
    if(q.initialized == 0){
        printf("PEEK ERROR: Queue is not inicialized");
        return;
    }
    if(isEmpty()){
        printf("Queue ocupped: 0");
        return;
    } 
    printf("Queue ocupped: %d", (q.end + 1));
}

int search(int position){
    if (isEmpty()) {
        printf("ERROR: Queue is empty!\n");
        return -1;
    }
    if (position <= 0 || position > q.end + 1) {
        printf("ERROR: Invalid position!\n");
        return -1;
    }
    for (int i = 0; i <= q.end; i++) {
        if (q.array[i].id == q.array[position - 1].id) {
            Person p = q.array[i];
            printf("People %s found at position %d of %d\n", p.name, i, q.end);
            printf("Name: %s - ", p.name);
            printf("Age: %d - ", p.age);
            printf("Gender: %c", p.gender);
            return i;
        }
    }
    printf("People with name %s not found in stack.\n", q.array[position - 1].name);
    return -1;
}

void clear(){
    if (!isEmpty()){
        for (int i = 0; i < MAX_SIZE; i++){
            Person personNull;
            q.array[i] = personNull;
        }
        q.end = -1;
        printf("Clear Successfull");
    } else {
        printf("CLEAR ERROR: Queue is empty!\n");
    }
}
