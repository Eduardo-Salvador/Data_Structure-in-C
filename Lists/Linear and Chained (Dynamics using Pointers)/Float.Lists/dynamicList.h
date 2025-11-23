typedef struct node {
    float data;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
} List;

void initializeList(List *l);
int isEmpty(List *l);
void insertAt(List *l, float data, int position);
float removeAt(List *l, int position);
void printList(List *l);