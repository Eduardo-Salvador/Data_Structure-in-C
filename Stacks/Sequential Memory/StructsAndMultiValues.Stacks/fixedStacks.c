#include "fixedStacks.h"
#include <stdio.h>

Stack s;

int isFull(){
    if(s.top == MAX_SIZE - 1){
        return 1;
    } return 0;
}

int isEmpty(){
    if(s.top == -1){
        return 1;
    } return 0;
}

void inicializeStack() {
    s.top = -1;
    s.initialized = 1;
    printf("Inicialize stack is successfull");
}

void push(Disk d){
    if (d.initialized == 0) {
        printf("PUSH ERROR: Disk is not initialized!\n");
        return;
    }
    if (s.initialized == 0){
        printf("PUSH ERROR: Stack is not initialized!\n");
        return;
    }
    if (isFull()) {
        printf("PUSH ERROR: Stack is full!\n");
        return;
    }
    s.top++;
    d.id = s.top + 1;
    s.array[s.top] = d;
    printf("Push successful\n");
    d.initialized = 0;
}

void pop(){
    if (s.initialized == 0){
        printf("POP ERROR: Stack is not initialized!\n");
        return;
    }
    if (isEmpty()) {
        printf("POP ERROR: Stack is empty!\n");
        return;
    }
    Disk d = s.array[s.top];
    if (d.initialized == 0) {
        printf("POP ERROR: Disk is not initialized!\n");
        return;
    }
    printf("Stack: %d - %s is removed!", d.id, d.color);
    s.top--;
}

void printStack(){
    if(!isEmpty()){
        printf("STACK:\n");
        for(int i = s.top; i >= 0; i--){
            Disk d = s.array[i];
            printf("ID: %d - ", d.id);
            printf("Color: %s - ", d.color);
            printf("Diameter: %d - ", d.diameter);
            printf("Weight: %.2f\n", d.weight);
        }
    } else {
        printf("Stack is empty!\n");
    }
}

void size(){
    if (!isEmpty()) {
        printf("Stack lenght: %d\n", s.top+1);
    } else {
        printf("SIZE ERROR: Stack is empty!\n");
    }
}

void top(){
    if (!isEmpty()) {
        Disk d = s.array[s.top];
        printf("Top value of the stack: \n");
        printf("ID: %d - ", d.id);
        printf("Color: %s - ", d.color);
        printf("Diameter: %d - ", d.diameter);
        printf("Weight: %.2f\n", d.weight);
    } else {
        printf("TOP ERROR: Stack is empty!\n");
    }
}

int search(int idPosition){
    if (isEmpty()) {
        printf("ERROR: Stack is empty!\n");
        return -1;
    }
    if (idPosition <= 0 || idPosition > s.top + 1) {
        printf("ERROR: Invalid position!\n");
        return -1;
    }
    for (int i = 0; i <= s.top; i++) {
        if (s.array[i].id == s.array[idPosition - 1].id) {
            Disk d = s.array[i];
            printf("Disk found at position %d of %d\n", i, s.top);
            printf("ID: %d - ", d.id);
            printf("Color: %s - ", d.color);
            printf("Diameter: %d - ", d.diameter);
            printf("Weight: %.2f\n", d.weight);
            return i;
        }
    }
    printf("Disk with ID %d not found in stack.\n", s.array[idPosition - 1].id);
    return -1;
}

void clear(){
    if (!isEmpty()){
        for (int i = 0; i < MAX_SIZE; i++){
            Disk diskNull;
            s.array[i] = diskNull;
        }
        s.top = -1;
        printf("Clear Successfull");
    } else {
        printf("CLEAR ERROR: Stack is empty!\n");
    }
}