#define MAX_SIZE 100

typedef struct fixedQueues {
    char name[50];
    int age;
    char gender;
} Person;

typedef struct {
    Person array[MAX_SIZE];
    int end;
    int start;
} Queue;

Queue queue();

int isEmpty(Queue q);
int isFull(Queue q);

void peek(Queue q);
void list(Queue q);
void size(Queue q);

Queue enqueue(Queue q, Person p);
Queue dequeue(Queue q);