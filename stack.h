#define INITIALSIZE 10

#include <stdbool.h>

typedef struct stack
{
    int capacity;
    int size;
    int* array;
} Stack;

Stack createstack(); // points to a new stack
bool push(Stack *stack, int value); // adds a new value on the stack
bool pop(Stack *stack, int *result); // removes a value from the stack
bool peek(Stack *stack, int *result); // sees what value is on top of the stack
bool isempty(Stack *stack);
bool destroy(Stack *stack); // frees memory used for the actual stack array
void stackinfo(Stack *stack); // print the current stack status
