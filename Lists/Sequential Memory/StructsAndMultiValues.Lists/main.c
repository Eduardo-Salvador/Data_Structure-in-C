#include "fixedLists.h"
#include <stdio.h>

int main(){
    int option, position, quantity;
    Film film;

    do{
        printf("\nMENU");
		printf("\n1. Inicialize List");
        printf("\n2. Inicialize Film");
		printf("\n3. Push");
		printf("\n4. Pop");
		printf("\n5. Print List");
        printf("\n6. Exit");
		printf("\nEnter the option: ");
		scanf("%d", &option);
        switch(option){
            case 1:
                inicializeList();
                break; 
            case 2:
                printf("Enter the title: ");
                scanf(" %[^\n]", film.title);
                printf("Enter the director: ");
                scanf(" %[^\n]", film.director);
                printf("How long is the movie? ");
                scanf("%d", &film.timeFilm);
                break;
            case 3:
                printf("Enter the position to add: ");
                scanf("%d", &position);
                push(film, --position);
                break;
            case 4:
                printf("Which position do you want to remove? ");
                scanf("%d", &position);
                pop(--position);
                break;
            case 5:
                printList();
                break;
            case 6:
                printf("Exit...");
                break;
            default:
                printf("Incorrect Option, try again.");
                break;
        }
    } while (option != 6);
    return 0;
} 