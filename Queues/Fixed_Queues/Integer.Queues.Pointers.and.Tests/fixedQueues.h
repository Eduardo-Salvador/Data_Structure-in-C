#define MAX_SIZE 100

typedef struct fixedQueues {
    int array[MAX_SIZE];
    int end;
    int start;
} Queue;

void queue(Queue *q);
void enqueue(Queue *q, int num);
void dequeue(Queue *q);
void peek(Queue *q);
void list(Queue *q);
void size(Queue *q);

int isEmpty(Queue *q);
int isFull(Queue *q);

//Tests
void testResult(int result);
void test1_emptyQueue(Queue *q);
void test2_insertQueue(Queue *q, int quant);
void test3_removeQueue();