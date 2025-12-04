typedef struct books {
    char isbn[50];
    char title[100];
    double price;
} Book;

typedef struct node {
    struct books *book;
    struct node *before;
} Node;

typedef struct stackDynamic {
    Node *top;
} Stack;

void initialize(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, Book *b);
Book* pop(Stack *s);
void peek(Stack *s);
int size(Stack *s);
void printStack(Stack *s);