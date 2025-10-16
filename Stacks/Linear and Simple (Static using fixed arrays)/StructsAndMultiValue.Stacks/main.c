#include "fixedStacks.h"
#include <stdio.h>

int main(){
    int idPosition, option;
    Disk disk;
    disk.initialized = 0;
    do{
        printf("\nMENU");
		printf("\n1. Inicialize stack");
		printf("\n2. Inicialize disk");
		printf("\n3. Push");
		printf("\n4. Pop");
        printf("\n5. Print Stack");
        printf("\n6. Size Stack");
        printf("\n7. Top on Stack");
		printf("\n8. Clear Stack");
        printf("\n9. Search");
        printf("\n10. Exit");
		printf("\nEnter the option: ");
		scanf("%d", &option);
        switch(option){
            case 1:
                inicializeStack();
                break; 
            case 2:
                printf("Enter the color: ");
                scanf(" %[^\n]", disk.color);
                printf("Enter the diameter: ");
                scanf(" %d", &disk.diameter);
                printf("Enter the weight: ");
                scanf("%lf", &disk.weight);
                disk.initialized = 1;
                break;
            case 3:
                push(disk);
                break;
            case 4:
                pop();
                break;
            case 5:
                printStack();
                break;
            case 6:
                size();
                break;
            case 7:
                top();
                break;
            case 8:
                clear();
                break;
            case 9:
                printf("Enter the position search: ");
                scanf("%d", &idPosition);
                search(idPosition);
                break;
            case 10:
                printf("Exit...");
                break;
            default:
                printf("Incorrect Option, try again.");
                break;
        }
    } while (option != 10);
    return 0;
}