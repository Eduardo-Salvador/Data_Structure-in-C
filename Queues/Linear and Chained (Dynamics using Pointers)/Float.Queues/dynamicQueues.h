typedef struct node {
    float data;
    struct node *next;   
} Node;

typedef struct queue {
    Node *start;  
    Node *end;    
} Queue;

void initializeQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, float number);
float dequeue(Queue *q);
float peek(Queue *q);
void list(Queue *q);
int size(Queue *q);