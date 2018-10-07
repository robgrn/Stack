#define INITIALSIZE 10

typedef struct stack
{
    int maxsize;
    int currentsize;
    int* stack;
} Stack;

Stack createstack(); // points to a new stack
void push(Stack *thestack, int value); // adds a new value on the stack
int pop(Stack *thestack); // removes a value from the stack
int peek(Stack *thestack); // sees what value is on top of the stack
void isempty(Stack *thestack);
void stackinfo(Stack *thestack); // print the current stack status
