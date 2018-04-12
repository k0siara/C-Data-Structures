/*
 * stack.h
 *
 *  Created on: Apr 12, 2018
 *      Author: Patryk Marciszek-Kosieradzki
 */

#ifndef _STACK_H_
#define _STACK_H_

typedef int bool;
#define true 1
#define false 0

typedef struct StackNode StackNode;
typedef struct Stack Stack;

StackNode *newStackNode();
Stack *newStack();

bool push(Stack *stack, int data);
bool pop(Stack *stack);
int size(Stack *stack);

void show(Stack *stack);


#endif
