#define MAX_SIZE 100

typedef struct fixedQueues {
    int id;
    char name[50];
    int age;
    char gender;
    int initialized;
} Person;

typedef struct {
    Person array[MAX_SIZE];
    int end;
    int start;
    int initialized;
} Queue;

int isEmpty();
int isFull();
void initializeQueue();
void enqueue(Person p);
void dequeue();
void printQueue();
void front();
void back();
void size();
int search(int position);
void clear();