#include <stdio.h>
#include "fixedStacks.h"

int main()
{
    
    Stack stackInt = initialize();
    
    Disk diskOne = {1, "Blue", 50, 22.3};
    Disk diskTwo = {2, "Red", 30, 26.31};
    Disk diskThree = {3, "Black", 40, 32.83};

    stackInt = push(stackInt, diskOne);
    printStack(stackInt);
    printf("\n");

    stackInt = push(stackInt, diskTwo);
    printStack(stackInt);
    printf("\n");

    stackInt = push(stackInt, diskThree);
    printStack(stackInt);
    printf("\n");

    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");

    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");
    
    stackInt = push(stackInt, diskThree);
    printStack(stackInt);
    printf("\n");

    size(stackInt);
    top(stackInt);
    return 0;
}
