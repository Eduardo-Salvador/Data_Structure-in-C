typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
} List;

void initializeList(List *l);
int isEmpty(List *l);
void insertAt(List *l, int data, int position);
int removeAt(List *l, int position);
void printList(List *l);
float average(List *l);