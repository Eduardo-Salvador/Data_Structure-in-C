#define MAX_SIZE 10

typedef struct fixedLists {
    int array[MAX_SIZE];
    int final;
} List;

List inicializeList();
int isEmpty(List l);
int isFull(List l);
List push(List l, int n, int position);
List pop(List l, int position);
void printList(List l);
void issueResult(int result);
void test1_EmptyList();
void test2_InsertList(int quant);
void test3_RemoveList();
void teste4_RemoveList(int quant);