#define MAX_SIZE 100

typedef struct {
    int id;
    char color[50];
    int diameter;
    double weight;
    int initialized;
} Disk;

typedef struct {
    Disk array[MAX_SIZE];
    int top;
    int initialized;
} Stack;

void inicializeStack();
int isFull();
int isEmpty();
void push(Disk d);
void pop();
void printStack();
void size();
void top();
void clear();
int search(int position);