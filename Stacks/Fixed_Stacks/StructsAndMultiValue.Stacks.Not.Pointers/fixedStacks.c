#include "fixedStacks.h"
#include <stdio.h>

Stack initialize() {
    Stack s;
    s.top = -1;
    return s;
}

int isFull(Stack s){
    return s.top == MAX_SIZE - 1;
}

int isEmpty(Stack s){
    return s.top == -1;
}

Stack push(Stack s, Disk d){
    if(!isFull(s)){
        s.top++;
        s.array[s.top] = d;
    } else {
        printf("PUSH ERROR: Stack is full!\n");
    }
    return s;
}

Stack pop(Stack s){
    if(!isEmpty(s)){
        s.top--;
    } else {
        printf("POP ERROR: Stack is empty!\n");
    }
    return s;
}

void printStack(Stack s){
    if(!isEmpty(s)){
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

void size(Stack s){
    if (!isEmpty(s)) {
        printf("Stack lenght: %d\n", s.top+1);
    } else {
        printf("SIZE ERROR: Stack is empty!\n");
    }
}

void top(Stack s){
    if (!isEmpty(s)) {
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
