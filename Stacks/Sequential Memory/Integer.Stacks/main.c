#include "fixedStacks.h"
#include <stdio.h>

int main(){
    int number, option, position;
    do{
        printf("\nMENU");
		printf("\n1. Inicialize stack");
		printf("\n2. Push");
		printf("\n3. Pop");
        printf("\n4. Print Stack");
        printf("\n5. Size Stack");
        printf("\n6. Top on Stack");
		printf("\n7. Clear Stack");
        printf("\n8. Search");
        printf("\n9. Exit");
		printf("\nEnter the option: ");
		scanf("%d", &option);
        switch(option){
            case 1:
                inicializeStack();
                break; 
            case 2:
                printf("Enter one number: ");
                scanf("%d", &number);
                push(number);
                break;
            case 3:
                pop();
                break;
            case 4:
                printStack();
                break;
            case 5:
                size();
                break;
            case 6:
                top();
                break;
            case 7:
                clear();
                break;
            case 8:
                printf("Enter the position search: ");
                scanf("%d", &position);
                search(position);
                break;
            case 9:
                printf("Exit...");
                break;
            default:
                printf("Incorrect Option, try again.");
                break;
        }
    } while (option != 9);
    return 0;
}