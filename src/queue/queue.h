#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef int bool;
#define false 0
#define true 1

typedef struct QueueNode QueueNode;
typedef struct Queue Queue;

QueueNode *new_queue_node();
Queue *new_queue();

bool enqueue(Queue *queue, int data);
bool dequeue(Queue *queue);

int peek(Queue *queue);

void queue_show(Queue *queue);

#endif
