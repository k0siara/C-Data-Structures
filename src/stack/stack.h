#ifndef _STACK_H_
#define _STACK_H_

typedef int bool;
#define false 0
#define true 1

typedef struct StackNode StackNode;
typedef struct Stack Stack;

StackNode *newStackNode();
Stack *newStack();

bool push(Stack *stack, int data);
bool pop(Stack *stack);
int size(Stack *stack);

void show(Stack *stack);


#endif
