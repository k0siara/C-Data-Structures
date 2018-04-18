#include <stdio.h>
#include <stdlib.h>
#include "stack/stack.h"
#include "queue/queue.h"
#include "list/list.h"
#include "logger/logger.h"

void stack_example() {
	Stack *stack = new_stack();

	stack_push(stack, 10);
	stack_push(stack, 15);

    stack_show(stack);
}

void queue_example() {
	Queue *queue = new_queue();

	enqueue(queue, 10);
	enqueue(queue, 15);

	dequeue(queue);
	dequeue(queue);

	enqueue(queue, 10);

    queue_show(queue);
}

void list_example() {
	List *list = new_list();
	list_push(list, 10);
	list_push(list, 15);
	list_push(list, 20);

	list_show(list);
}

int main(void) {
	//stack_example();
	//queue_example();
	list_example();

	return EXIT_SUCCESS;
}
