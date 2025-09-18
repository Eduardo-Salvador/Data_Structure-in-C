#include <stdio.h>
#include "fixedStacks.h"

int main()
{
    Stack stackInt;
    
    initialize(&stackInt); 
    
    push(&stackInt, 5);
    printStack(&stackInt);
    printf("\n");

    push(&stackInt, 10);
    printStack(&stackInt);
    printf("\n");

    push(&stackInt, 2);
    printStack(&stackInt);
    printf("\n");

    pop(&stackInt);
    printStack(&stackInt);
    printf("\n");
    
    push(&stackInt, 17);
    printStack(&stackInt);
    printf("\n");
    
    size(&stackInt);
    top(&stackInt);
    return 0;
}
