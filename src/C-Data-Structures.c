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
