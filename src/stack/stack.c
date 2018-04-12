#include <stdlib.h>
#include "stack.h"

struct StackNode {
    struct StackNode *next;
    int data;

};

struct Stack {
    StackNode *head;
    size_t count;

};

StackNode *new_stack_node() {
    StackNode *node =  malloc(sizeof(StackNode));
    node->next = NULL;
    node->data = NULL;
    return node;
}

Stack *new_stack() {
    Stack *stack =  malloc(sizeof(Stack));
    stack->head = NULL;
    stack->count = 0;
    return stack;
}

bool push(Stack *stack, const int data) {
	if (!stack) {
		printf("Stack is NULL \n");
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
        printf("Empty Stack \n");
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

void show(Stack *stack) {
    StackNode *current = stack->head;
    if (!current) {
    	printf("EMPTY \n");
    	return;
    }

    while (current) {
    	printf("%d ", current->data);
    	current = current->next;
    }
}
