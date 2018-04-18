#ifndef _STACK_H_
#define _STACK_H_

typedef int bool;
#define false 0
#define true 1

typedef struct StackNode StackNode;
typedef struct Stack Stack;

StackNode *new_stack_node();
Stack *new_stack();

bool push(Stack *stack, const int data);
bool pop(Stack *stack);
int size(Stack *stack);

void show_stack(Stack *stack);


#endif
