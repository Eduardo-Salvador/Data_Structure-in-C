typedef struct contacts {
    char name[100];
    char surname[50];
    char d_last_conversation[12];
} Contact;

typedef struct node {
    Contact *contact;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
} List;

void initializeList(List *l);
int isEmpty(List *l);
void insertAt(List *l, Contact *c, int position);
Contact * removeAt(List *l, int position);
void printList(List *l);