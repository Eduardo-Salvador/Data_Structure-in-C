#include <stdio.h>
#include "fixedQueues.h"

int main(){
	int temp;
	int option;
    Queue q;
	q = queue();

	do {
		printf("\n\nMENU");
        printf("\n1. Initialize");
        printf("\n2. Insert");
        printf("\n3. Remover");
        printf("\n4. Print");
        printf("\n5. First Element");
        printf("\n6. Queue size");
		printf("\n7. Print the first even number in line");
        printf("\n8. Perform queue initialization tests");
        printf("\n9. Perform queue insertion tests");
        printf("\n10. Perform queue removal tests");
        printf("\n11. Exit");
        printf("\nEnter the desired option: ");
        scanf("%d", &option);
		
		switch(option) {
			case 1:
				q = queue();
				break;
			case 2:
                printf("Enter the number: ");
				scanf("%d", &temp);
				q = enqueue(q, temp);
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
				firstPair(q);
				break;
            case 8:
                test1_emptyQueue(q);
                break;
			case 9:
				test2_insertQueue(q, 1);
				test2_insertQueue(q, 2);
				test2_insertQueue(q, 3);
				test2_insertQueue(q, 4);
				test2_insertQueue(q, 5);
				test2_insertQueue(q, 6);
				test2_insertQueue(q, 7);
				break;
			case 10:
				test3_removeQueue();
				test3_removeQueue(q, 1);
				test3_removeQueue(q, 2);
				test3_removeQueue(q, 3);
				test3_removeQueue(q, 4);
				test3_removeQueue(q, 5);
				test3_removeQueue(q, 6);
				break;
			case 11:
				printf("Ending the program...");
				break;
			default:
				printf("\nInvalid option. Please choose a valid option number.");
		}
		
	} while(option != 11);
}