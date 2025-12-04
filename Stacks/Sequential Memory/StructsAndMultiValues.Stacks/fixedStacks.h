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

int isFull();
int isEmpty();

void inicializeStack();
void push(Disk d);
void pop();
void printStack();
void size();
void top();
int search(int position);
void clear();