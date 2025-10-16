#include "fixedStacks.h"
#include <stdio.h>

Stack s;

void inicializeStack() {
    s.top = -1;
    s.initialized = 1;
    printf("Inicialize stack is successfull");
}

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

void push(int number){
    if (s.initialized == 0){
        printf("PUSH ERROR: Stack is not initialized!\n");
        return;
    }
    if (isFull()) {
        printf("PUSH ERROR: Stack is full!\n");
        return;
    }
    s.top++;
    s.array[s.top] = number;
    printf("Push successful\n");
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
    printf("Number: %d is removed!", s.array[s.top]);
    s.top--;
}

void printStack(){
    if(!isEmpty()){
        printf("STACK:\n");
        for(int i = s.top; i >= 0; i--){
            printf("%d\n", s.array[i]);
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
        printf("Top value of the stack: \n");
        printf("%d", s.array[s.top]);
    } else {
        printf("TOP ERROR: Stack is empty!\n");
    }
}

void clear(){
    if (!isEmpty()){
        for (int i = 0; i < MAX_SIZE; i++){
            s.array[i] = 0;
        }
        s.top = -1;
    } else {
        printf("CLEAR ERROR: Stack is empty!\n");
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
        if (s.array[i] == s.array[idPosition - 1]) {
            printf("Number %d found at position %d of %d\n", s.array[i] , i, s.top);
            return i;
        }
    }
    printf("Number %d not found in stack.\n", s.array[idPosition - 1]);
    return -1;
}