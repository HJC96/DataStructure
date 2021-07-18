#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef int item;
typedef struct ListNode {
	item data;
	struct ListNode* link;
}ListNode;



extern void insert_node(ListNode** phead, ListNode *p,ListNode* new_node)
{
	//printf("before : new_node = %p\n", new_node);
	//printf("before : *phead = %p\n", *phead);

	if (p == NULL) {
		new_node->link = *phead;
		*phead = new_node;
	}
	else {
		new_node->link = p->link;
		p->link = new_node;
	}

	//printf("after : new_node = %p\n", new_node);
	//printf("after : *phead = %p\n", *phead);
}
