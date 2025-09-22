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

void queue(Queue *q);

int isEmpty(Queue *q);
int isFull(Queue *q);

void peek(Queue *q);
void list(Queue *q);
void size(Queue *q);
void enqueue(Queue *q, Person p);
void dequeue(Queue *q);