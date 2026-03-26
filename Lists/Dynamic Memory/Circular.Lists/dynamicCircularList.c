#include <stdio.h>
#include <stdlib.h>
#include "dynamicCircularList.h"

void initializeList(CircularList *l) {
    l->head = NULL;
    printf("List Initialized!\n");
}

int isEmpty(CircularList *l) {
    return (l->head == NULL);
}

void insertAt(CircularList *l, float data, int position) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) return;
    
    newNode->data = data;

    if (l->head == NULL) {
        l->head = newNode;
        newNode->next = l->head;
        printf("Success Insert!\n");
        return;
    }

    if (position <= 0) {
        Node *aux = l->head;
        while (aux->next != l->head) {
            aux = aux->next;
        }
        newNode->next = l->head;
        aux->next = newNode;
        l->head = newNode;
        printf("Success Insert!\n");
        return;
    }

    Node *aux = l->head;
    int i = 0;
    while (aux->next != l->head && i < position - 1) {
        aux = aux->next;
        i++;
    }
    newNode->next = aux->next;
    aux->next = newNode;
    printf("Success Insert!\n");
}

float removeAt(CircularList *l, int position) {
    if (isEmpty(l)) {
        printf("Empty List!\n");
        return -1;
    }

    Node *toRemove;
    float value;

    if (position <= 0) {
        toRemove = l->head;
        value = toRemove->data;

        if (l->head->next == l->head) {
            l->head = NULL;
        } else {
            Node *aux = l->head;
            while (aux->next != l->head) {
                aux = aux->next;
            }
            l->head = l->head->next;
            aux->next = l->head;
        }
        free(toRemove);
        return value;
    }

    Node *aux = l->head;
    int i = 0;
    while (aux->next != l->head && i < position - 1) {
        aux = aux->next;
        i++;
    }

    if (aux->next == l->head) {
        printf("Out of bond\n");
        return -1;
    }

    toRemove = aux->next;
    value = toRemove->data;
    aux->next = toRemove->next;
    
    free(toRemove);
    return value;
}

void printList(CircularList *l) {
    if (isEmpty(l)) {
        printf("List empty!\n");
        return;
    }
    Node *aux = l->head;
    do {
        printf("%.2f -> ", aux->data);
        aux = aux->next;
    } while (aux != l->head);
    printf("(HEAD)\n");
}

void freeList(CircularList *l) {
    if (isEmpty(l)) return;
    Node *current = l->head;
    Node *next;
    Node *tail = l->head;
    while (tail->next != l->head) tail = tail->next;
    tail->next = NULL;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    l->head = NULL;
}