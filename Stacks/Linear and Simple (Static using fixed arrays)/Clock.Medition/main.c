#include "fixedStacks.h"
#include <stdio.h>
#include <time.h>

int main(){
    double start, finish, elapsed;
    int number, option, position, quantity, p;
    printf("Enter the quantity elements for insert: ");
    scanf("%d", &quantity);
    inicializeStack();

    do{
        printf("\nMENU");
		printf("\n1. Insert %d elements on stack", quantity);
		printf("\n2. Pop %d elements on stack", quantity);
        printf("\n3. Print Stack");
        printf("\n4. Inicialize Stack");
        printf("\n5. Exit");
		printf("\nEnter the option: ");
		scanf("%d", &option);
        switch(option){
            case 1:
                inicializeStack();
                start = (double) clock();
                for(int i = 0; i < quantity; i++){  
                    p = getData();
                    push(p);
                }
                finish = (double) clock();
                elapsed = finish - start;
                printf("\nUtilized: %.2f clocks.", elapsed);
                break; 
            case 2:
                inicializeStack();
                for(int i = 0; i < quantity; i++){  
                    p = getData();
                    push(p);
                }
                start = (double) clock();
                for(int i = 0; i < quantity; i++){
                    p = pop();
                    printData(p);
                    printf(" Removed");
                }
                finish = (double) clock();
                elapsed = finish - start;
                printf("\nUtilized: %.2f clocks.", elapsed);
                break;
                break;
            case 3:
                inicializeStack();
                for(int i = 0; i < quantity; i++){  
                    p = getData();
                    push(p);
                }
                start = (double) clock();
                printStack();
                finish = (double) clock();
                elapsed = finish - start;
                printf("\nUtilized: %.2f clocks.", elapsed);
                break;
            case 4:
                inicializeStack();
                break;
            case 5:
                printf("Exit...");
                break;
            default:
                printf("Incorrect Option, try again.");
                break;
        }
    } while (option != 5);
    return 0;
}