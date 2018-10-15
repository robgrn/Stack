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
    s.capacity = INITIALSIZE;
    s.size = 0;
    s.array = calloc(sizeof(int), INITIALSIZE);
    
    return s;
}

/*
    adds an item to the stack
*/
bool push(Stack *stack, int value)
{
    if (stack->size < stack->capacity)
    {
        *(stack->array + stack->size) = value;
        stack->size++;
        
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
bool pop(Stack *stack, int *result)
{
    if (stack->size > 0)
    {
        *result = *(stack->array + (stack->size - 1));
        stack->size--;
        
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
bool peek(Stack *stack, int *result)
{
    if (stack->size > 0)
    {
        *result = *(stack->array + (stack->size - 1));
        
        return true;
    }
    else
    {
        return false;
    }
}

bool isempty(Stack *stack)
{
    if (stack->size <= 0)
        return true;
    else
        return false;
}

/*
    Frees the memory used for the stack items.
    True is returned if the stack array was freed, otherwise false is returned.
*/
bool destroy(Stack *stack)
{
    if (!stack->array)
    {
        free(stack->array)
        return true;
    }
    else
    {
        return false;
    }
}

/*
    prints out current stack status
*/
void stackinfo(Stack *stack)
{
    printf("capacity: %d\n", stack->capacity);
    printf("size: %d\n", stack->size);
    printf("stack: %p\n", stack->array);
}
