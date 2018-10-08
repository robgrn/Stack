#define INITIALSIZE 10

#include <stdbool.h>

typedef struct stack
{
    int maxsize;
    int currentsize;
    int* stack;
} Stack;

Stack createstack(); // points to a new stack
bool push(Stack *thestack, int value); // adds a new value on the stack
bool pop(Stack *thestack, int *result); // removes a value from the stack
int *peek(Stack *thestack); // sees what value is on top of the stack
bool isempty(Stack *thestack);
void stackinfo(Stack *thestack); // print the current stack status
