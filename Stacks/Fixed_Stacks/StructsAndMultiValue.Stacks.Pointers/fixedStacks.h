#define MAX_SIZE 100

typedef struct {
    int id;
    char color[50];
    int diameter;
    double weight;
} Disk;

typedef struct {
    Disk* array[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s);
int isFull(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, Disk *d);
void pop(Stack *s);
void printStack(Stack *s);
void size(Stack *s);
void top(Stack *s);