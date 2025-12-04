typedef struct peoples {
    char name[50];
    int age;
    char gender[2];
} People;

typedef struct node {
    People *people;
    struct node *next;   
} Node;

typedef struct queue {
    Node *start;  
    Node *end;    
} Queue;

void initializeQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, People *p);
People * dequeue(Queue *q);
People * peek(Queue *q);
void list(Queue *q);
int size(Queue *q);