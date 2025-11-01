#include "fixedStacks.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h> 

Stack s;
int size = 0;

void inicializeStack() {
    s.top = -1;
    s.initialized = 1;
    printf("Inicialize stack is successfull");
}

int aleatoryNumber(int low, int high){
    int k;
    double d;
    d = (double) rand () / ((double) MAX_SIZE + 1);
    k = d * (high - low - 1);
    return low + k;
}

int getData(){
    return aleatoryNumber(0, MAX_SIZE);
}

void printData(int p){
    printf("\nElement: %i", p);
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
    printData(number);
    s.top++;
    s.array[s.top] = number;
}

int pop(){
    int aux;
    if (s.initialized == 0){
        printf("POP ERROR: Stack is not initialized!\n");
        return -1;
    }
    if (isEmpty()) {
        printf("POP ERROR: Stack is empty!\n");
        return -1;
    }
    aux = s.array[s.top];
    s.top--;
    return aux;
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