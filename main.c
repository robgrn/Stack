#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

void peek_result(int *top);
void popped_result(int *popped);

int main(int argc, char *argv[])
{
    Stack s = createstack();
    push(&s, 3);
    push(&s, 7);
    
    int *result = malloc(sizeof(*result));
    peek(&s, result);
    printf("peeked: %d\n", *result);
    
    free(result);
    
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
