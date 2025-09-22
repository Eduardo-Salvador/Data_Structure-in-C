#include "fixedQueues.h"
#include <stdio.h>

Queue queue(){
    Queue q;
    q.end = -1;
    q.start = 0;
    return q;
}

int isEmpty(Queue q){
    if(q.end == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(Queue q){
    if(q.end == (MAX_SIZE - 1)){
        return 1;
    } else {
        return 0;
    }
}

Queue enqueue(Queue q, int num){
    if(!isFull(q)){
        q.end++;
        q.array[q.end] = num;
        return q;
    } else {
        printf("Error: Queue is full!");
        return q;
    }
}

Queue dequeue(Queue q){
    if(!isEmpty(q)){
        int aux = q.array[q.start];
        for(int i = q.start; i < q.end; i++){
            q.array[i] = q.array[i+1];
        }
        q.array[q.end] = 0;
        q.end--;   
        printf("Value: %d dequeued", aux);
        return q;
    } else {
        printf("Error: Queue is empty!");
        return q;
    }
}

void peek(Queue q){
    if(!isEmpty(q)){
        printf("First element: %d", q.array[0]);
    } else {
        printf("Error: Queue is empty!");
    }
}

void list(Queue q){
    if(!isEmpty(q)){
        printf("Queue:\n");
        for(int i = 0; i <= q.end; i++){
            printf("%d\n", q.array[i]);
        }
    } else {
        printf("Queue Empty");
    }
}

void size(Queue q){
    printf("Queue Size: %d\n", MAX_SIZE);
    if(!isEmpty(q)){
        printf("Queue ocupped: %d", (q.end + 1));
    } else {
        printf("Queue ocupped: 0");
    }
}

void firstPair(Queue q){
    int firstPair;
    if(!isEmpty(q)){
        for(int i = 0; i <= q.end; i++){
            if(q.array[i] % 2 == 0){
                firstPair = q.array[i];
            }
        }
        printf("First Pair is: %d", firstPair);
    } else {
        printf("ERROR: Queue is empty!");
    }
}

void testResult(int result) {
	if(result) 
		printf("\nGREEN!");
	else printf("\nRED!");
}

void test1_emptyQueue(Queue q){
	printf("\nTest 1: This test will check for empty queue");
	q = queue();
	if(isEmpty(q)) {
		testResult(1);
	} else testResult(0);
}

void test2_insertQueue(Queue q, int quant){
	int num[quant], i;

	printf("\nTest 2: This test will insert %d elements into the queue", quant); 
	if (quant > MAX_SIZE)
		printf(", and it will have to say that the queue is full, inserting only the first %d", MAX_SIZE);

	for(i = 0; i < quant; i++)
		num[i] = i+1;
		
	q = queue();

	for(i = 0; i < quant; i++)
		q = enqueue(q, num[i]);
		
	for(i = 0; i < quant && i < MAX_SIZE; i++)
		if(q.array[i] != num[i]) {
			testResult(0);
			return;
		}
	testResult(1);
}

void test3_removeQueue(){
	Queue removed;
	printf("\nTest 3: This test will try to remove from an empty queue");
	removed = queue();
	removed = dequeue(removed);
	if(isEmpty(removed))
		testResult(1);
	else testResult(0);
}