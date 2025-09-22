#include <stdio.h>
#include "fixedQueues.h"

int main(){
	int temp;
	int option;
    Queue q;
	queue(&q);

	do {
		printf("\n\nMENU");
        printf("\n1. Initialize");
        printf("\n2. Insert");
        printf("\n3. Remove");
        printf("\n4. Print");
        printf("\n5. First Element");
        printf("\n6. Queue size");
        printf("\n7. Perform queue initialization tests");
        printf("\n8. Perform queue insertion tests");
        printf("\n9. Perform queue removal tests");
        printf("\n10. Exit");
        printf("\nEnter the desired option: ");
        scanf("%d", &option);
		
		switch(option) {
			case 1:
				queue(&q);
				break;
			case 2:
                printf("Enter the number: ");
				scanf("%d", &temp);
				enqueue(&q, temp);
				break;
			case 3:
				dequeue(&q);
				break;
			case 4:
				list(&q);
				break;
			case 5:
				peek(&q);
				break;
            case 6:
                size(&q);
                break;
            case 7:
                test1_emptyQueue(&q);
                break;
			case 8:
				test2_insertQueue(&q, 1);
				test2_insertQueue(&q, 2);
				test2_insertQueue(&q, 3);
				test2_insertQueue(&q, 4);
				test2_insertQueue(&q, 5);
				test2_insertQueue(&q, 6);
				test2_insertQueue(&q, 7);
				break;
			case 9:
				test3_removeQueue();
				break;
			case 10:
				printf("Ending the program...");
				break;
			default:
				printf("\nInvalid option. Please choose a valid option number.");
		}
		
	} while(option != 10);
}