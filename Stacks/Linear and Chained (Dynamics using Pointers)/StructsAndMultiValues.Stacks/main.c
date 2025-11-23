#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynamicStack.h"

int main(int argc, char *argv[]){
    Stack *s = (Stack *) malloc(sizeof(Stack));
    Book *b;
    int option = 0;
    char isbn[50];
    char title[100];
    double price = 0;
    do {
        printf("\nStack Menu\n");
        printf("1. Initialize Stack\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("4. Peek\n");
        printf("5. Size\n");
        printf("6. Print Stack\n");
        printf("7. Exit\n");
        scanf("%d", &option);
        
        switch(option){
        case 1:
            initialize(s);
            printf("Stack initialized!\n");
            break;
        case 2:
            b = (Book *) malloc(sizeof(Book));
            printf("Enter ISBN: ");
            scanf("%s", isbn);
            strcpy(b->isbn, isbn); //Strcpy -> Copy one string from other
            printf("Enter Title: ");
            scanf("%s", title);
            strcpy(b->title, title);
            printf("Enter Price: ");
            scanf("%2lf", &price);
            b->price = price;
            push(s, b);
            printf("Book pushed!\n");
            break;
        case 3: 
            Book *removed = pop(s);
            if (removed != NULL) {
                printf("Book removed: %s\n", removed->title);
                free(removed);
            } else {
                printf("Stack is empty!\n");
            }
            break;
        case 4:
            peek(s);
            break;
        case 5:
            printf("Size: %d\n", size(s));
            break;
        case 6:
            printStack(s);
            printf("\n");
            break;
        case 7:
            printf("\nExit...");
            break;
    }
    } while (option != 7);
}