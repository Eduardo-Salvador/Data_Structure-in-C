#define MAX_SIZE 100

typedef struct fixedQueues {
    double array[MAX_SIZE];
    int end;
    int start;
} Queue;

Queue queue();

int isEmpty(Queue q);
int isFull(Queue q);

void peek(Queue q);
void list(Queue q);
void size(Queue q);
void firstPair(Queue q);

Queue enqueue(Queue q, double num);
Queue dequeue(Queue q);

//Tests:
void testResult(int result);
void test1_emptyQueue(Queue q);
void test2_insertQueue(Queue q, int quant);
void test3_removeQueue();
void test4_removeQueue(int quant);