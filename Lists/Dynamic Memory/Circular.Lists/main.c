#include "dynamicCircularList.h"

int main() {
    CircularList list;
    initializeList(&list);

    insertAt(&list, 10.0, 0);
    insertAt(&list, 20.0, 0);
    insertAt(&list, 30.0, 1);

    printList(&list);

    removeAt(&list, 1);
    printList(&list);

    freeList(&list);
    return 0;
}