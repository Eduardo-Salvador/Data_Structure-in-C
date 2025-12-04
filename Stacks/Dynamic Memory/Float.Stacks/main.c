#include <stdio.h>
#include <stdlib.h>
#include "dynamicStack.h"

int main(int argc, char *argv[]){
    Stack *s = (Stack *) malloc(sizeof(Stack));
    int option = 0;
    float number;
    do {
        printf("Stack Menu\n");
        printf("1. Initialize Stack\n");
        printf("2. Push\n");
        printf("3. Push Ordened\n");
        printf("4. Pop\n");
        printf("5. Peek\n");
        printf("6. Size\n");
        printf("7. Print Stack\n");
        printf("8. Exit\n");
        scanf("%d", &option);
        
        switch(option){
        case 1:
            initialize(s);
            break;
        case 2:
            printf("Enter one number: ");
            scanf("%f", &number);
            push(s, number);
            break;
        case 3:
            printf("Enter one number: ");
            scanf("%f", &number);
            pushOrdened(s, number);
            break;
        case 4:
            printf("Number removed: %.2f\n", pop(s));
            break;
        case 5:
            printf("First Element: %.2f\n", peek(s));
            break;
        case 6:
            printf("Size: %d\n", size(s));
            break;
        case 7:
            printStack(s);
            printf("\n");
            break;
        case 8:
            printf("\nExit...");
            break;
    }
    } while (option != 8);
}