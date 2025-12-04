#include <stdio.h>
#include <stdlib.h>
#include "dynamicList.h"

void initializeList(List *l){
    l->head = NULL;
    printf("List Initialized!\n");
}

int isEmpty(List *l){
    return (l->head == NULL);
}

void insertAt(List *l, float data, int position) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Error!\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;
    if (position == 0 || l->head == NULL) {
        newNode->next = l->head;
        l->head = newNode;
        printf("Success Insert!\n");
        return;
    }
    Node *aux = l->head;
    int i = 0;
    while (aux->next != NULL && i < position - 1) {
        aux = aux->next;
        i++;
    }
    newNode->next = aux->next; 
    aux->next = newNode;
    printf("Success Insert!\n");
}

float removeAt(List *l, int position){
    if (l->head != NULL) {
        if (position == 0) {
            Node *toRemove = l->head;
            float value = toRemove->data;
            l->head = l->head->next;
            free(toRemove);          
            return value;
        }
        Node *aux = l->head;
        int i = 0;
        while (aux != NULL && i < position - 1){ 
            aux = aux->next; 
            i++; 
        }
        if(aux == NULL || aux->next == NULL){
            printf("Out of bond\n");
            return -1;
        }
        Node *toRemove = aux->next; 
        float value = toRemove->data; 
        aux->next = toRemove->next; 
        free(toRemove);
        return value;
    }
    printf("Empty List!\n");
    return -1;
}

void printList(List *l){
    if(l->head != NULL){
        Node *aux = l->head;
        while(aux != NULL){
            printf("%.2f -> ", aux->data);
            aux = aux->next;
        }
        printf("NULL\n");
        return;
    }
    printf("List empty!\n");
}