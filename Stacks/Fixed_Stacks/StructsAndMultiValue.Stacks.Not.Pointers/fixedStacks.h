#define MAX_SIZE 100

typedef struct {
    int id;
    char color[50];
    int diameter;
    double weight;
} Disk;

typedef struct {
    Disk array[MAX_SIZE];
    int top;
} Stack;

Stack initialize();

int isFull(Stack s);
int isEmpty(Stack s);

Stack push(Stack s, Disk d);
Stack pop(Stack s);

void printStack(Stack s);
void size(Stack s);
void top(Stack s);