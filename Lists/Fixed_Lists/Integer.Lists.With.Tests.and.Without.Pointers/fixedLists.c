#include "fixedLists.h"
#include <stdio.h>

List l;

void inicializeList(){
    l.final = -1;
}

int isEmpty(){
    if (l.final == -1){
        printf("List is empty");
        return 1;
    } else {
        return 0;
    }
}

int isFull(){
    if(l.final == MAX_SIZE - 1){
        printf("List is full");
        return 1;
    } else {
        return 0;
    }
}

void push(int n, int position){
    if(!isFull()){
        if(position > l.final || position < 0){
            l.final++;
            l.array[l.final] = n;
        } else {
            l.final++;
            for(int i = l.final; i > position; i--){
                l.array[i] = l.array[i - 1]; 
            } 
            l.array[position] = n;
        }
    } else {
        printf("List is full!\n");
    }
}

int pop(int position){
	int varAux = l.array[position];
    if(!isEmpty()){
        if (position < 0 || position > l.final){
            printf("Position invalid.");
            return 0;
        }
        for (int i = position; i < l.final; i++){
            l.array[i] = l.array[i+1];
        } 
        l.final--;
    } else {
        printf("List is empty!\n");
    }
	return varAux;
}

void printList(){
    if(!isEmpty(l)){
        for(int i = 0; i <= l.final; i++){
            printf("%d ", l.array[i]);
        }
		printf("\n");
    } else{
        printf("List is empty!\n");
    }
}

void removeLarger(int number){
	for (int i = 0; i <= l.final; i++){
		if (number < l.array[i]){
			pop(i);
			i = 0;
		}		
	}
}

void issueResult(int result) {
	if(result) 
		printf("\nGREEN!");
	else printf("\nRED!");
}

void test1_EmptyList(){
	printf("\nTest 1: This test will check for empty list");
	inicializeList();
	if(isEmpty(l)) {
		issueResult(1);
	} else issueResult(0);
}

void test2_InsertList(int quant){
	if(quant > 10) {
		printf("\nIt is only possible to test with a list of up to 10 elements");
	} else {
		int i, responseExpected, 
		    numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 
			position[10] = {0, 1, 4, 1, 7, 5, 3, 7, 8, 10}, 
			result[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
								 {1, 2, 0, 0, 0, 0, 0, 0, 0, 0},
								 {1, 2, 3, 0, 0, 0, 0, 0, 0, 0},
								 {1, 4, 2, 3, 0, 0, 0, 0, 0, 0},
								 {1, 4, 2, 3, 5, 0, 0, 0, 0, 0},
								 {1, 4, 2, 3, 5, 6, 0, 0, 0, 0},
								 {1, 4, 2, 7, 3, 5, 6, 0, 0, 0},
								 {1, 4, 2, 7, 3, 5, 6, 8, 0, 0},
								 {1, 4, 2, 7, 3, 5, 6, 8, 9, 0},
								 {1, 4, 2, 7, 3, 5, 6, 8, 9, 10}
								};
			
		printf("\nTest 2: This test will insert %d elements into the list", quant);
		
		if (quant > MAX_SIZE) {
			printf(", and you will have to say that the list is full, inserting only the first %d", MAX_SIZE);
		} inicializeList();
	
		for(i = 0; i < quant; i++) {
			push(numbers[i], position[i]);
		}
		if(quant > MAX_SIZE) {
			responseExpected = MAX_SIZE - 1;
		} else {
			responseExpected = quant - 1;
		}
		
		for(i = 0; i < quant && i < MAX_SIZE; i++) {
			if(l.array[i] != result[responseExpected][i]) {
				issueResult(0);
				return;
			}
		} issueResult(1);
	}
}

void test3_RemoveList(){
	int removed = 0;
	printf("\nTest 3: This test will try to remove from an empty list");
	inicializeList();
	removed = pop(0);
	if(isEmpty()) {
		issueResult(1);
	} else {
		issueResult(0);
	}
}

void teste4_RemoveList(int quant){
	if(quant > 10) {
		printf("\nIt is only possible to test with a list of up to 10 elements");
	} else {
		int i, responseExpected, removed,
		    numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 
			positions[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 
			positionRemove[10][10] = {
								{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
								{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
								{2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
								{2, 2, 1, 0, 0, 0, 0, 0, 0, 0},
								{4, 2, 0, 1, 0, 0, 0, 0, 0, 0},
								{3, 4, 0, 2, 0, 0, 0, 0, 0, 0},
								{6, 1, 4, 0, 2, 1, 0, 0, 0, 0},
								{5, 2, 5, 2, 0, 2, 1, 0, 0, 0},
								{7, 7, 3, 5, 0, 2, 2, 1, 0, 0},
								{5, 5, 5, 0, 4, 4, 2, 1, 1, 0}
								},
				exit[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
								 {2, 1, 0, 0, 0, 0, 0, 0, 0, 0},
								 {3, 1, 2, 0, 0, 0, 0, 0, 0, 0},
								 {3, 4, 2, 1, 0, 0, 0, 0, 0, 0},
								 {5, 3, 1, 4, 2, 0, 0, 0, 0, 0},
								 {4, 6, 1, 5, 2, 3, 0, 0, 0, 0},
								 {7, 2, 6, 1, 5, 4, 3, 0, 0, 0},
								 {6, 3, 8, 4, 1, 7, 5, 2, 0, 0},
								 {8, 9, 4, 7, 1, 5, 6, 3, 2, 0},
								 {6, 7, 8, 1, 9, 10, 4, 3, 5, 2}
								};
        printf("\nTest 4: This test will insert %d element into the list and remove it, leaving the list empty", quant);

		inicializeList();
		for(i = 0; i < quant; i++) {
			push(numbers[i], positions[i]);
		}

		if(quant > MAX_SIZE) {
			responseExpected = MAX_SIZE-1;
		} else {
			responseExpected = quant-1;
		}
		
		for(i = 0; i < quant && i < MAX_SIZE; i++) {
			removed = pop(positionRemove[responseExpected][i]);
			if(removed != exit[responseExpected][i]){
				issueResult(0);
				return;
			}
		}
		if(isEmpty()) {
			issueResult(1);
		} else {
			issueResult(0);
		}
	}
}