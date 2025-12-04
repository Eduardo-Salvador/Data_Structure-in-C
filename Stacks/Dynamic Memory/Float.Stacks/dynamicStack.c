#include <stdio.h>
#include <stdlib.h>
#include "dynamicStack.h"

void initialize(Stack *s){
    s->top = NULL;
}

int isEmpty(Stack *s){
    return (s->top == NULL);
}

void push(Stack *s, float number){
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode != NULL) {
        newNode->data = number;
        newNode->before = s->top;
        s->top = newNode;
    } else {
        printf("Memory is full!");
    }
}

void pushOrdened(Stack *s, float number){
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode != NULL) {
        if(s->top == NULL || number > s->top->data) {
            newNode->data = number;
            newNode->before = s->top;
            s->top = newNode;
        } else {
            printf("Number %.2f not pushed (smaller than top).\n", number);
            free(newNode);
        }
    }
}

float pop(Stack *s) {
    if(!isEmpty(s)) {
        Node *temp = s->top;
        float value = temp->data;
        s->top = temp->before;
        free(temp);
        return value;
    } else {
        printf("Stack is empty!\n");
        return -1;
    }
}

float peek(Stack *s) {
    if(!isEmpty(s)) {
        return s->top->data;
    } else {
        printf("Stack is empty!\n");
        return -1;
    }
}

int size(Stack *s) {
    int count = 0;
    Node *current = s->top;  
    while (current != NULL) {
        count++;
        current = current->before; 
    }
    return count;
}

void printStack(Stack *s){
    if(!isEmpty(s)){
        printf("Stack:\n");
        Node *current = s->top;  
        while (current != NULL) {
            printf("%.2f\n", current->data);
            current = current->before;
        }
    } else {
        printf("Stack is empty!");
    }
}