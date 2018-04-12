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
#include "logger/logger.h"

void stackExample() {
	Stack *stack = newStack();

	push(stack, 10);
	push(stack, 15);

    show(stack);
    printf("\n");

    debug("oh fock %d", 20);
}

int main(void) {
	stackExample();

	return EXIT_SUCCESS;
}
