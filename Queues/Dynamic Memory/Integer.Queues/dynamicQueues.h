typedef struct node {
    int data;
    struct node *next;   
} Node;

typedef struct queue {
    Node *start;  
    Node *end;    
} Queue;

void initializeQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, int number);
int dequeue(Queue *q);
int peek(Queue *q);
void list(Queue *q);
int size(Queue *q);