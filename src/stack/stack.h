#ifndef _STACK_H_
#define _STACK_H_

typedef int bool;
#define false 0
#define true 1

typedef struct StackNode StackNode;
typedef struct Stack Stack;

StackNode *new_stack_node();
Stack *new_stack();

bool stack_push(Stack *stack, const int data);
bool stack_pop(Stack *stack);

int stack_size(Stack *stack);

void stack_show(Stack *stack);


#endif
