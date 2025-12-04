typedef struct node {
    double data;
    struct node *before;
} Node;

typedef struct stackDynamic {
    Node *top;
} Stack;

void initialize(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, float number);
void pushOrdened(Stack *s, float number);
float pop(Stack *s);
float peek(Stack *s);
int size(Stack *s);
void printStack(Stack *s);