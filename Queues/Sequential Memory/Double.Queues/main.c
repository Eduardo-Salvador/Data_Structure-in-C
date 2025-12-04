#include <stdio.h>
#include <string.h>
#include "fixedQueues.h"

int main(){
	int option, position;
	double number;

	do {
		printf("\nMENU");
        printf("\n1. Initialize");
        printf("\n2. Create and Enqueue People");
        printf("\n3. Dequeue");
        printf("\n4. Print Queue");
        printf("\n5. First Element");
        printf("\n6. Last Element");
		printf("\n7. Queue Size");
		printf("\n8. Search in Queue");
		printf("\n9. Clear Queue");
        printf("\n10. Exit");
        printf("\nEnter the option: ");
        scanf("%d", &option);
		switch(option) {
			case 1:
				initializeQueue();
				break;
			case 2:
                printf("Enter the number: ");
				scanf(" %lf", &number);
				enqueue(number);
				break;
			case 3:
				dequeue();
				break;
			case 4:
				printQueue();
				break;
			case 5:
				front();
				break;
			case 6:
				back();
				break;
            case 7:
                size();
                break;
			case 8:
				printf("Enter the position search: ");
                scanf("%d", &position);
                search(position);
                break;
			case 9:
				clear();
				break;
			case 10:
				printf("Exit...");
				break;
			default:
				printf("\nInvalid option. Please choose a valid option number.");
		}	
	} while(option != 10);
}