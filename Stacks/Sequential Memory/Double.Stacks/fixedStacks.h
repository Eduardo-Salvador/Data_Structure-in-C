#define MAX_SIZE 100

typedef struct {
    double array[MAX_SIZE];
    int top;
    int initialized;
} Stack;

void inicializeStack();
int isFull();
int isEmpty();
void push(double number);
void pop();
void printStack();
void size();
void top();
void clear();
int search(int position);