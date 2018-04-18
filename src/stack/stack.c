#include <stdio.h>
#include <stdlib.h>
#include "../logger/logger.h"
#include "stack.h"

struct StackNode {
    StackNode *next;
    int data;
};

struct Stack {
    StackNode *head;
    size_t count;
};

StackNode *new_stack_node() {
    StackNode *node = (StackNode*) malloc(sizeof(StackNode));
    node->next = NULL;
    node->data = NULL;
    return node;
}

Stack *new_stack() {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->head = NULL;
    stack->count = 0;
    return stack;
}

bool push(Stack *stack, const int data) {
	if (!stack) {
		error("Stack is NULL");
		return false;
	}

	StackNode *tmp = new_stack_node();
	tmp->data = data;
	tmp->next = stack->head;
	stack->head = tmp;

    stack->count++;
    return true;
}

bool pop(Stack *stack) {
    if (!stack->head) {
        error("Empty Stack");
        return false;
    }

    StackNode *tmp = stack->head;
    stack->head = stack->head->next;

    free(tmp);
    tmp = NULL;

    stack->count--;
    return true;
}

int size(Stack *stack) {
	return stack->count;
}

void show_stack(Stack *stack) {
    StackNode *current = stack->head;
    if (!current) {
    	debug("EMPTY");
    	return;
    }

    while (current) {
    	printf("%d ", current->data);
    	current = current->next;
    }
}
