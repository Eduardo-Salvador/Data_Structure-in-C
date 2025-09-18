#define MAX_SIZE 100

typedef struct {
    int array[MAX_SIZE];
    int top;
} Stack;

Stack initialize();

int isFull(Stack s);
int isEmpty(Stack s);

Stack push(Stack s, int num);
Stack pop(Stack s);

void printStack(Stack s);
void size(Stack s);
void top(Stack s);