#define MAX_SIZE 10

typedef struct fixedLists {
    double array[MAX_SIZE];
    int final;
} List;

void inicializeList();
int isEmpty();
int isFull();
void push( double n, int position);
double pop(int position);
void printList();
void issueResult(int result);
void test1_EmptyList();
void test2_InsertList(int quant);
void test3_RemoveList();
void teste4_RemoveList(int quant);