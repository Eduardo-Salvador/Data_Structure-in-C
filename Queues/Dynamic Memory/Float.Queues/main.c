#include <stdio.h>
#include <stdlib.h>
#include "dynamicQueue.h"

int main(int argc, char *argv[]){
    Queue *q = (Queue *) malloc(sizeof(Queue));
    int option = 0;
    float number;
    do {
        printf("Queue Menu\n");
        printf("1. Initialize Queue\n");
        printf("2. Enqueue\n");
        printf("3. Dequeue\n");
        printf("4. Peek\n");
        printf("5. Size\n");
        printf("6. List\n");
        printf("7. Exit\n");
        scanf("%d", &option);
        
        switch(option){
        case 1:
            initializeQueue(q);
            break;
        case 2:
            printf("Enter one number: ");
            scanf("%f", &number);
            enqueue(q, number);
            break;
        case 3:
            printf("Number removed: %.2f\n", dequeue(q));
            break;
        case 4:
            printf("First Element: %.2f\n", peek(q));
            break;
        case 5:
            printf("Size: %d\n", size(q));
            break;
        case 6:
            list(q);
            break;
        case 7:
            printf("\nExit...");
            break;
        }
    } while (option != 7);
}