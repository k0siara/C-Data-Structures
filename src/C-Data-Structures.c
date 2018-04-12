#include <stdio.h>
#include <stdlib.h>
#include "stack/stack.h"
#include "logger/logger.h"

void stack_example() {
	Stack *stack = new_stack();

	push(stack, 10);
	push(stack, 15);

    show(stack);
    printf("\n");

    debug("oh fock %d", 20);
}

int main(void) {
	stack_example();

	return EXIT_SUCCESS;
}
