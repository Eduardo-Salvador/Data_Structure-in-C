#include "fixedLists.h"
#include <stdio.h>

List l;

void inicializeList(){
    l.final = -1;
}

int isEmpty(){
    if(l.final == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(l.final == MAX_SIZE - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(Film f, int position){
    if(!isFull()){
        if(position > l.final || position < 0){
            l.final++;
            l.array[l.final] = f;
        } else {
            l.final++;
            for(int i = l.final; i > position; i--){
                l.array[i] = l.array[i - 1]; 
            } 
            l.array[position] = f;
        }
    } else {
        printf("List is full!\n");
    }
}

Film pop(int position){
    Film aux = l.array[position];
    if(!isEmpty()){
        if (position < 0 || position > l.final){
            printf("Position invalid.");
            return aux;
        }
        for (int i = position; i < l.final; i++){
            l.array[i] = l.array[i+1];
        } 
        l.final--;
    } else {
        printf("List is empty!\n");
    }
	return aux;
}

void printList(){
    if(!isEmpty(l)){
        for(int i = 0; i <= l.final; i++){
            printf("\nFilm: %s\n", l.array[i].title);
            printf("Director: %s\n", l.array[i].director);
            printf("Time: %d Minutes", l.array[i].timeFilm);
        }
		printf("\n");
    } else{
        printf("List is empty!\n");
    }
}