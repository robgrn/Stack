#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
    creates a new stack of the specified size
*/
Stack createstack()
{
    Stack s;
    s.maxsize = INITIALSIZE;
    s.currentsize = 0;
    s.stack = calloc(sizeof(int), INITIALSIZE);
    
    return s;
}

/*
    adds an item to the stack
*/
void push(Stack *thestack, int value)
{
    if (thestack->currentsize < thestack->maxsize)
    {
        *(thestack->stack + thestack->currentsize) = value;
        thestack->currentsize++;
    }
    else
    {
        printf("The stack is full.\n");
    }
}

/*
    looks at the top item on the stack
*/
int peek(Stack *thestack)
{
    if (thestack->currentsize <= 0)
        return -1;
    
    return *(thestack->stack + thestack->currentsize - 1);
}

/*
    removes and returns the top item
*/
int pop(Stack *thestack)
{
    if (thestack->currentsize <= 0)
        return -1;
    
    int top = *(thestack->stack + thestack->currentsize - 1);
    thestack->currentsize--;
    
    return top;
}

/*
    prints out current stack status
*/
void stackinfo(Stack *thestack)
{
    printf("maxsize: %d\n", thestack->maxsize);
    printf("currentsize: %d\n", thestack->currentsize);
    printf("stack: %p\n", thestack->stack);
}
