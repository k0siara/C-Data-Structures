#include <stdio.h>
#include <stdlib.h>
#include "stack/stack.h"
#include "queue/queue.h"
#include "logger/logger.h"

void stack_example() {
	Stack *stack = new_stack();

	push(stack, 10);
	push(stack, 15);

    show_stack(stack);
}

void queue_example() {
	Queue *queue = new_queue();

	enqueue(queue, 10);
	enqueue(queue, 15);

    show_queue(queue);
}

int main(void) {
	stack_example();
	queue_example();

	return EXIT_SUCCESS;
}
