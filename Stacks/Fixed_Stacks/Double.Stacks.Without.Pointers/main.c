#include <stdio.h>
#include "fixedStacks.h"

int main() {
    Stack stackInt = initialize();  
    
    stackInt = push(stackInt, 5.12);
    printStack(stackInt);
    printf("\n");
    
    stackInt = push(stackInt, 10.5);
    printStack(stackInt);
    printf("\n");
    
    stackInt = push(stackInt, 2.11);
    printStack(stackInt);
    printf("\n");
    
    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");
    
    stackInt = pop(stackInt);
    printStack(stackInt);
    printf("\n");
    
    stackInt = push(stackInt, 17.01);
    printStack(stackInt);
    printf("\n");
    
    size(stackInt);
    top(stackInt);
    return 0;
}
