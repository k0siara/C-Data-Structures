#ifndef _LIST_H_
#define _LIST_H_

typedef int bool;
#define false 0
#define true 1

typedef struct ListNode ListNode;
typedef struct List List;

ListNode *new_list_node();
List *new_list();

bool list_push(List *list, int data);

int list_size(List *list);

void list_show(List *list);

#endif