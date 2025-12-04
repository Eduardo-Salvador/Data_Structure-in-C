#define MAX_SIZE 100

typedef struct {
    double array[MAX_SIZE];
    int end;
    int start;
    int initialized;
} Queue;

int isEmpty();
int isFull();
void initializeQueue();
void enqueue(double number);
void dequeue();
void printQueue();
void front();
void back();
void size();
int search(int position);
void clear();