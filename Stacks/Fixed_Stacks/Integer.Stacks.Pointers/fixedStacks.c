#include "fixedStacks.h"
#include <stdio.h>

void initialize(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s){
    return s->top == MAX_SIZE - 1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

void push(Stack *s, int num){
    if(!isFull(s)){
        s->top++;
        s->array[s->top] = num;
    } else {
        printf("PUSH ERROR: Stack is full!\n");
    }
}

void pop(Stack *s){
    if(!isEmpty(s)){
        s->top--;
    } else {
        printf("POP ERROR: Stack is empty!\n");
    }
}

void printStack(Stack *s){
    if(!isEmpty(s)){
        printf("STACK:\n");
        for(int i = s->top; i >= 0; i--){
            printf("%d\n", s->array[i]);
        }
    } else {
        printf("Stack is empty!\n");
    }
}

void size(Stack *s){
    if (!isEmpty(s)) {
        printf("Stack lenght: %d\n", s->top+1);
    } else {
        printf("SIZE ERROR: Stack is empty!\n");
    }
}

void top(Stack *s){
    if (!isEmpty(s)) {
        printf("Top value of the stack: %d\n", s->array[s->top]);
    } else {
        printf("TOP ERROR: Stack is empty!\n");
    }
}
