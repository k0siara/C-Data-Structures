#include <stdio.h>
#include <stdlib.h>
#include "../logger/logger.h"
#include "queue.h"

struct QueueNode {
    QueueNode *next;
    int data;
};

struct Queue {
    QueueNode *front;
    QueueNode *end;
    size_t count;
};

QueueNode *new_queue_node() {
    QueueNode *node = (QueueNode*) malloc(sizeof(QueueNode));
    node->next = NULL;
    node->data = NULL;
    return node;
}

Queue *new_queue() {
    Queue *queue = (Queue*) malloc(sizeof(Queue));
    queue->front = NULL;
    queue->end = NULL;
    queue->count = 0;
    return queue;
}

bool enqueue(Queue *queue, int data) {
    if (!queue) {
        error("Queue is NULL");
        return false;
    }

    if (!queue->front) {
        queue->front = new_queue_node();
        queue->front->data = data;
        queue->end = queue->front;
    } else {
        QueueNode *tmp = new_queue_node();
        tmp->data = data;

        queue->end->next = tmp;
        queue->end = tmp;
    }

    queue->count++;
    return true;
}

bool dequeue(Queue *queue) {
    QueueNode *tmp = queue->front;
    queue->front = queue->front->next;

    free(tmp);
    tmp = NULL;

    queue->count--;
    return true;
}

int peek(Queue *queue) {
    return queue->front->data;
}

void show_queue(Queue *queue) {
    QueueNode *current = queue->front;
    while (current) {
    	printf("%d ", current->data);
    	current = current->next;
    }
}