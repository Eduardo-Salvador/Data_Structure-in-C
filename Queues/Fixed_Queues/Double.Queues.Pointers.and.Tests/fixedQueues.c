#include <stdio.h>
#include "fixedQueues.h"

void queue(Queue *q){
    q->end = -1;
    q->start = 0;
}

int isEmpty(Queue *q){
    if(q->end == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(Queue *q){
    if(q->end == MAX_SIZE-1){
        return 1;
    } else {
        return 0;
    }
}

void enqueue(Queue *q, double num){
    if(!isFull(q)){
        q->end++;
        q->array[q->end] = num;
    } else {
        printf("\nQueue is full!");
    }
}

void dequeue(Queue *q){
    if(!isEmpty(q)){
        double aux = q->array[q->start];
        for(int i = 0; i <= q->end; i++){
            q->array[i] = q->array[i+1];
        }
        q->array[q->end] = 0;
        q->end--;
        printf("\nElement %.2f is removed from queue", aux);
    } else {
        printf("\nQueue is empty!");
    }
}

void peek(Queue *q){
    if(!isEmpty(q)){
        printf("\nFirst element from queue: %.2f", q->array[q->start]);
    } else {
        printf("\nQueue is empty!");
    }
}

void list(Queue *q){
    printf("\nQueue: ");
    if(!isEmpty(q)){
        for(int i = 0; i <= q->end; i++){
            printf("\n%.2f", q->array[i]);
        }
    } else {
        printf("\nNo elements in queue!");
    }
}

void size(Queue *q){
    printf("\nQueue size: %d", MAX_SIZE);
    if(!isEmpty(q)){
        printf("\nQueue ocupped: %d", q->end+1);
    } else{
        printf("\nQueue ocupped: 0");
    }
}

void testResult(int result) {
	if(result) 
		printf("\nGREEN!");
	else printf("\nRED!");
}

void test1_emptyQueue(Queue *q){
	printf("\nTest 1: This test will check for empty queue");
	queue(q);
	if(isEmpty(q)) {
		testResult(1);
	} else testResult(0);
}

void test2_insertQueue(Queue *q, int quant){
	double num[quant];
    int i;

	printf("\nTest 2: This test will insert %d elements into the queue", quant); 
	if (quant > MAX_SIZE)
		printf(", and it will have to say that the queue is full, inserting only the first %d", MAX_SIZE);

	for(i = 0; i < quant; i++)
		num[i] = i+1;
		
	queue(q);

	for(i = 0; i < quant; i++)
		enqueue(q, num[i]);
		
	for(i = 0; i < quant && i < MAX_SIZE; i++)
		if(q->array[i] != num[i]) {
			testResult(0);
			return;
		}
	testResult(1);
}

void test3_removeQueue(){
	Queue removed;
	printf("\nTest 3: This test will try to remove from an empty queue");
	queue(&removed);
	dequeue(&removed);
	if(isEmpty(&removed))
		testResult(1);
	else testResult(0);
}