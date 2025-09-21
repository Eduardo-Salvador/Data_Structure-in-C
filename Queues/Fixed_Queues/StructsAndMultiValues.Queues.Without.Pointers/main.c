#include <stdio.h>
#include <string.h>
#include "fixedQueues.h"

int main(){
	int option;
    Queue q;
	Person p;
	q = queue();

	do {
		printf("\n\nMENU");
        printf("\n1. Initialize");
        printf("\n2. Insert");
        printf("\n3. Remover");
        printf("\n4. Print");
        printf("\n5. First Element");
        printf("\n6. Queue size");
        printf("\n7. Exit");
        printf("\nEnter the desired option: ");
        scanf("%d", &option);
		
		switch(option) {
			case 1:
				q = queue();
				break;
			case 2:
                printf("Enter the name: ");
				scanf(" %s", &p.name);
				printf("Enter the age: ");
				scanf(" %d", &p.age);
				printf("Enter the gender (M ou W): ");
				scanf(" %c", &p.gender);
				while (p.gender != 'H' && p.gender != 'W') {
					printf("Incorrect Gender. Enter again (H/W): ");
					scanf(" %c", &p.gender); 
				}
				q = enqueue(q, p);
				break;
			case 3:
				q = dequeue(q);
				break;
			case 4:
				list(q);
				break;
			case 5:
				peek(q);
				break;
            case 6:
                size(q);
                break;
			case 7:
				printf("Ending the program...");
				break;
			default:
				printf("\nInvalid option. Please choose a valid option number.");
		}	
	} while(option != 7);
}