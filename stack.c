#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
bool push(Stack *thestack, int value)
{
    if (thestack->currentsize < thestack->maxsize)
    {
        *(thestack->stack + thestack->currentsize) = value;
        thestack->currentsize++;
        
        return true;
    }
    else
    {
        return false;
    }
}

/*
    removes and returns the top item
*/
bool pop(Stack *thestack, int *result)
{
    if (thestack->currentsize > 0)
    {
        *result = *(thestack->stack + (thestack->currentsize - 1));
        thestack->currentsize--;
        
        return true;
    }
    else
    {
        return false;
    }
}

/*
    Looks at the top item on the stack.
    result will need to be free'd when the stack isn't empty
*/
bool peek(Stack *thestack, int *result)
{
    if (thestack->currentsize > 0)
    {
        *result = *(thestack->stack + (thestack->currentsize - 1));
        
        return true;
    }
    else
    {
        return false;
    }
}

bool isempty(Stack *thestack)
{
    if (thestack->currentsize <= 0)
        return true;
    else
        return false;
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
