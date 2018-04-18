#include <stdio.h>
#include <stdlib.h>
#include "../logger/logger.h"
#include "list.h"

struct ListNode {
	ListNode *prev;
	ListNode *next;	
	
	int data;	
};

struct List {
	ListNode *head;
    size_t count;
};

ListNode *new_list_node() {
    ListNode *node = (ListNode*) malloc(sizeof(ListNode));
    node->prev = NULL;
    node->next = NULL;
    node->data = NULL;

    return node;
}

List *new_list() {
    List *list = (List*) malloc(sizeof(List));
    list->head = NULL;
    list->count = 0;

    return list;
}

bool list_push(List *list, int data) {
    if (!list) { 
        error("List is NULL");
        return false;
    }

    if (!list->head) {
        list->head = new_list_node();
        list->head->data = data;

        list->head->next = list->head;
        list->head->prev = list->head;
    } else {
        ListNode *tmp = new_list_node();
        tmp->data = data;

        ListNode *current = list->head;
        while(current->next != list->head) {
            current = current->next;
        }

        tmp->prev = current;
        tmp->next = list->head;

        list->head->prev = tmp;
        current->next = tmp;
    }

    list->count++;
    return true;
}

int list_size(List *list) {
    return list->count;
}

void list_show(List *list) {
    ListNode *current = list->head;
    
    int i;
    for (i=0; i<list->count; i++) {
        printf("%d ", current->data);
    	current = current->next;
    }
}