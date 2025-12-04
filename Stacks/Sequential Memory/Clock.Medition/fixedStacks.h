#define MAX_SIZE 50001

typedef struct {
    int array[MAX_SIZE];
    int top;
    int initialized;
} Stack;

void inicializeStack();
int isFull();
int isEmpty();
void push(int number);
int pop();
void printStack();
int getData();
int aleatoryNumber(int low, int high);
void printData(int p);