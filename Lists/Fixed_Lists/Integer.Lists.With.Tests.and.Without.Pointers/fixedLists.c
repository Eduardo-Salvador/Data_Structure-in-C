#include "fixedLists.h"
#include <stdio.h>

List inicializeList(){
    List l;
    l.final = -1;
    return l;
}

int isEmpty(List l){
    if (l.final == -1){
        printf("List is empty");
        return 1;
    } else {
        return 0;
    }
}

int isFull(List l){
    if(l.final == MAX_SIZE - 1){
        printf("List is full");
        return 1;
    } else {
        return 0;
    }
}

List push(List l, int n, int position){
    if(!isFull(l)){
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
	return l;
}

List pop(List l, int position){
    if(!isEmpty(l)){
        if (position < 0 || position > l.final){
            printf("Position invalid.");
            return l;
        }
        for (int i = position; i < l.final; i++){
            l.array[i] = l.array[i+1];
        } 
        l.final--;
    } else {
        printf("List is empty!\n");
    }
	return l;
}

void printList(List l){
    if(!isEmpty(l)){
        for(int i = 0; i < l.final+1; i++){
            printf("%d - ", l.array[i]);
        }
		printf("\n");
    } else{
        printf("List is empty!\n");
    }
}

void issueResult(int result) {
	if(result) 
		printf("\nGREEN!");
	else printf("\nRED!");
}

void test1_EmptyList(){
	printf("\nTest 1: This test will check for empty list");
	List l = inicializeList();
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
		if (quant > MAX_SIZE)
			printf(", and you will have to say that the list is full, inserting only the first %d", MAX_SIZE);
		List l = inicializeList();
		for(i = 0; i < quant; i++)
			l = push(l, numbers[i], position[i]);
		if(quant > MAX_SIZE)
			responseExpected = MAX_SIZE-1;
		else responseExpected = quant-1;
		
		for(i = 0; i < quant && i < MAX_SIZE; i++)
			if(l.array[i] != result[responseExpected][i]) {
				issueResult(0);
				return;
			}
		issueResult(1);
	}
}

void test3_RemoveList(){
	int removed = 0;
	printf("\nTest 3: This test will try to remove from an empty list");
	List l = inicializeList();
	l = pop(l, 0);
	if(isEmpty(l))
		issueResult(1);
	else issueResult(0);
}

void teste4_RemoveList(int quant){
	if(quant > 10) {
		printf("\nIt is only possible to test with a list of up to 10 elements");
	} else {
		int i, responseExpected,
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

		List l = inicializeList();
		for(i = 0; i < quant; i++)
			l = push(l, numbers[i], positions[i]);

		if(quant > MAX_SIZE)
			responseExpected = MAX_SIZE-1;
		else responseExpected = quant-1;
		
		for(i = 0; i < quant && i < MAX_SIZE; i++) {
			l = pop(l, positionRemove[responseExpected][i]);
		}
		if(isEmpty(l))
			issueResult(1);
		else issueResult(0);
		}
}