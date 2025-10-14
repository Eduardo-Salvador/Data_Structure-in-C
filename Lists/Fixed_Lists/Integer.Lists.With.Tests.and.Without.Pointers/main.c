#include "fixedLists.h"
#include <stdio.h>

int main(){
    int number, option, position, quantity;
    List l;
    do{
        printf("\nMENU");
		printf("\n1. Inicialize List");
		printf("\n2. Push");
		printf("\n3. Pop");
		printf("\n4. Print List");
        printf("\n5. Test 1 - Empty");
        printf("\n6. Test 2 - Insert List");
        printf("\n7. Test 3 - Remove Empty List");
		printf("\n8. Test 4 - Remove List");
        printf("\n9. Remove larger numbers");
        printf("\n10. Exit");
		printf("\nEnter the option: ");
		scanf("%d", &option);
        switch(option){
            case 1:
                inicializeList();
                break; 
            case 2:
                printf("Enter the number: ");
                scanf("%d", &number);
                printf("Enter the position to add: ");
                scanf("%d", &position);
                push(number, --position);
                break;
            case 3:
                printf("Which position do you want to remove? ");
                scanf("%d", &position);
                pop(--position);
                break;
            case 4:
                printList(l);
                break;
            case 5:
                test1_EmptyList();
                break;
            case 6:
                printf("Enter the quantity elements for add to test: (Max. 10): ");
                scanf("%d", &quantity);
                test2_InsertList(quantity);
                break;
            case 7:
                test3_RemoveList();
                break;
            case 8:
                printf("Enter the quantity elements for add to test: (Max. 10): ");
                scanf("%d", &quantity);
                teste4_RemoveList(quantity);
                break;
            case 9:
                printf("Enter the number to remove large numbers that it: ");
                scanf("%d", &quantity);
                removeLarger(quantity);
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