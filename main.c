#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[])
{
    Stack mystack;
    mystack = createstack();
    
    push(&mystack, 2);
    push(&mystack, 7);
    push(&mystack, 4);
    
    int peeked = peek(&mystack);
    if (peeked == -1)
        printf("Empty stack - nothing to see\n");
    else
        printf("Peeking: %d\n", peeked);
    
    int popped = pop(&mystack);
    if (popped == -1)
        printf("Empty stack - nothing to pop\n");
    else
        printf("Popped: %d\n", popped);
    
    return 0;
}
