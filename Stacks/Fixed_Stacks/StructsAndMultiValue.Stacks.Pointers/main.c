#include <stdio.h>
#include "fixedStacks.h"

int main()
{
    Stack stackInt;
    
    Disk diskOne = {1, "Blue", 50, 22.3};
    Disk diskTwo = {2, "Red", 30, 26.31};
    Disk diskThree = {3, "Black", 40, 32.83};

    initialize(&stackInt); 
    
    push(&stackInt, &diskOne);
    printStack(&stackInt);
    printf("\n");

    push(&stackInt, &diskTwo);
    printStack(&stackInt);
    printf("\n");

    push(&stackInt, &diskThree);
    printStack(&stackInt);
    printf("\n");

    pop(&stackInt);
    printStack(&stackInt);
    printf("\n");

    pop(&stackInt);
    printStack(&stackInt);
    printf("\n");
    
    push(&stackInt, &diskThree);
    printStack(&stackInt);
    printf("\n");

    size(&stackInt);
    top(&stackInt);
    return 0;
}
