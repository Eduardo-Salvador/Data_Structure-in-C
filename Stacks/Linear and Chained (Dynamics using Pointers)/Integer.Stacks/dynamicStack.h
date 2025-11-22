typedef struct node {
    int data;
    struct node *before;
} Node;

typedef struct stackDynamic {
    Node *top;
} Stack;

void initialize(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, int number);
void pushOrdened(Stack *s, int number);
int pop(Stack *s);
int peek(Stack *s);
int size(Stack *s);
void printStack(Stack *s);