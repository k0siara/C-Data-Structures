/*
 ============================================================================
 Name        : C-Data-Structures.c
 Author      : Patryk Marciszek-Kosieradzki
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Data Structures in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack/stack.h"

void stackExample() {
	Stack *stack = newStack();

	push(stack, 10);
	push(stack, 15);
	push(stack, 20);

    show(stack);
}

int main(void) {
	stackExample();

	return EXIT_SUCCESS;
}
