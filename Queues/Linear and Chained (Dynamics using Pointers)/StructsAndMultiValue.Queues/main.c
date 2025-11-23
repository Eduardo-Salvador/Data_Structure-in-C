#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynamicQueue.h"

int main(int argc, char *argv[]){
    Queue *q = (Queue *) malloc(sizeof(Queue));
    People *p;
    int option = 0;
    char name[50];
    int age;
    char gender[2];
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
            p = (People *) malloc(sizeof(People));
            if (p != NULL) {
                printf("Enter the name: ");
                scanf("%49s", &name);
                strcpy(p->name, name);
                printf("Enter the age: ");
                scanf("%d", &p->age);
                printf("Enter the gender: ");
                scanf("%1s", &gender);
                strcpy(p->gender, gender);
                enqueue(q, p);
                break;
            } break;
        case 3:
            printf("People removed: %s\n", dequeue(q)->name);
            break;
        case 4:
            printf("First People: %s\n", peek(q)->name);
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