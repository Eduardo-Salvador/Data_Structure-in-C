#include <stdio.h>
#include <stdlib.h>
#include "dynamicStack.h"

void initialize(Stack *s){
    s->top = NULL;
}

int isEmpty(Stack *s){
    return (s->top == NULL);
}

void push(Stack *s, Book *b){
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode != NULL) {
        newNode->book = b;
        newNode->before = s->top;
        s->top = newNode;
    } else {
        printf("Memory is full!");
    }
}

Book* pop(Stack *s) {
    if(!isEmpty(s)) {
        Node *temp = s->top;
        Book *value = temp->book;
        s->top = temp->before;
        free(temp);        
        return value;      
    }
    return NULL;
}


void peek(Stack *s) {
    if(!isEmpty(s)) {
        printf("%s - %s - $%.2lf", s->top->book->isbn, s->top->book->title, s->top->book->price);
    } else {
        printf("Stack is empty!\n");
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
            printf("%s - %s - $%.2lf\n", current->book->isbn, current->book->title, current->book->price);
            current = current->before;
        }
    } else {
        printf("Stack is empty!");
    }
}