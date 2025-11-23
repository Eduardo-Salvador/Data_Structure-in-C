#include <stdio.h>
#include <stdlib.h>
#include "dynamicList.h"

int main(int argc, char *argv[]){
    List *l = (List *) malloc(sizeof(List));
    int option = 0;
    int number;
    int position;
    do {
        printf("List Menu\n");
        printf("1. Initialize List\n");
        printf("2. Insert\n");
        printf("3. Remove\n");
        printf("4. Print List\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        
        switch(option){
        case 1:
            initializeList(l);
            break;
        case 2:
            printf("Enter one number: ");
            scanf("%d", &number);
            printf("Enter the position: ");
            scanf("%d", &position);
            insertAt(l, number, position);
            break;
        case 3:
            printf("Enter the position: ");
            scanf("%d", &position);
            printf("Number removed: %d", removeAt(l, position));
            break;
        case 4:
            printList(l);
            break;
        case 5:
            printf("\nExit...");
            break;
        }
    } while (option != 5);
}