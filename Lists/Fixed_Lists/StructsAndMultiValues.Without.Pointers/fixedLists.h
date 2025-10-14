#define MAX_SIZE 10

typedef struct films {
    char title[150];
    char director[50];
    int timeFilm;
} Film;

typedef struct fixedLists {
    Film array[MAX_SIZE];
    int final;
} List;

void inicializeList();
int isEmpty();
int isFull();
void push(Film f, int position);
Film pop(int position);
void printList();
void issueResult(int result);
void test1_EmptyList();
void test2_InsertList(int quant);
void test3_RemoveList();
void teste4_RemoveList(int quant);