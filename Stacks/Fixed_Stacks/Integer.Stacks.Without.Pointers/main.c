#include <stdio.h>
#include "fixedStacks.h"

int main()
{
    Stack stackInt = initialize();  
    
    stackInt = push(stackInt, 5);
    printStack(stackInt);
    printf("\n");

    stackInt = push(stackInt, 10);
    printStack(stackInt);
    printf("\n");

    stackInt = push(stackInt, 2);
    printStack(stackInt);
    printf("\n");

    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");

    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");
    
    stackInt = push(stackInt, 17);
    printStack(stackInt);
    printf("\n");
    
    size(stackInt);
    top(stackInt);
    return 0;
}