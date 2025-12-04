#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynamicList.h"

int main(int argc, char *argv[]){
    List *l = (List *) malloc(sizeof(List));
    Contact *c;
    int option = 0;
    char name[100];
    char surname[50];
    char date[12];
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
            c = (Contact *) malloc(sizeof(Contact));
            printf("Enter the name: ");
            scanf("%s", &name);
            strcpy(c->name, name);
            printf("Enter the surname: ");
            scanf("%s", &surname);
            strcpy(c->surname, surname);
            printf("Enter the date of last conversation: ");
            scanf("%s", &date);
            strcpy(c->d_last_conversation, date);
            printf("Enter the position: ");
            scanf("%d", &position);
            insertAt(l, c, position);
            break;
        case 3:
            printf("Enter the position: ");
            scanf("%d", &position);
            Contact *removed = removeAt(l, position);
            printf("Contact removed: %s - %s\n", removed->name, removed->surname);
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