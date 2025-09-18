#define MAX_SIZE 100

typedef struct {
    int array[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s);
int isFull(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, int num);
void pop(Stack *s);
void printStack(Stack *s);
void size(Stack *s);
void top(Stack *s);
