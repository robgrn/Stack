#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void peek_result(int *top);
void popped_result(int *popped);

int main(int argc, char *argv[])
{
    Stack mystack;
    mystack = createstack();
    
    push(&mystack, 2);
    // push(&mystack, 7);
    // push(&mystack, 4);
    
    if (isempty(&mystack))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
    
    // int *top = peek(&mystack);
    // peek_result(top);
    
    int *popped = pop(&mystack);
    popped_result(popped);
    
    if (isempty(&mystack))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
    
    /* Previous use of top would need to be freed because a new block
    of memory is being allocated and then assigned to top, losing track of
    the pointer to the previous block of allocated memory. This could be
    avoided by reusing the same memory allocated earlier. */
    // free(top);
    
    // top = peek(&mystack);
    // peek_result(top);
    
    // free(top);
    free(popped);
    
    return 0;
}

void peek_result(int *top)
{
    if (!*top)
        printf("Stack is empty - nothing to see\n");
    else
        printf("%d\n", *top);
}

void popped_result(int *popped)
{
    if (!*popped)
        printf("Stack is empty - nothing to pop\n");
    else
        printf("%d\n", *popped);
}
