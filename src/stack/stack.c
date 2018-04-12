/*
 * stack.c
 *
 *  Created on: Apr 12, 2018
 *      Author: Patryk Marciszek-Kosieradzki
 */

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

StackNode *newStackNode() {
    StackNode *node =  malloc(sizeof(StackNode));
    node->next = NULL;
    node->data = NULL;
    return node;
}

Stack *newStack() {
    Stack *stack =  malloc(sizeof(Stack));
    stack->head = NULL;
    stack->count = 0;
    return stack;
}

bool push(Stack *stack, int data) {
	if (stack == NULL) {
		printf("Stack is NULL");
		return false;
	}

    if (stack->head == NULL) {
        stack->head = newStackNode();
        stack->head->data = data;
    } else {
        StackNode *tmp = newStackNode();
        tmp->data = data;
        tmp->next = stack->head;
        stack->head = tmp;
    }

    stack->count++;
    return true;
}

bool pop(Stack *stack) {
    if (stack->head == NULL) {
        printf("Empty Stack");
        return false;
    }

    if (stack->head->next == NULL) {
        stack->head == NULL;
    } else {
        StackNode *tmp = stack->head;
        stack->head = stack->head->next;
        free(tmp);
    }

    stack->count--;
    return true;
}

int size(Stack *stack) {
	return stack->count;
}

void show(Stack *stack) {
    StackNode *current = stack->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}
