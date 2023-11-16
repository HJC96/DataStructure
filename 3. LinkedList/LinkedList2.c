#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef int item;
typedef struct ListNode {
	item data;
	struct ListNode* link;
}ListNode;

int main(int argc, char* argv[]) {
	ListNode* p1;
	ListNode* p2;

	p1 = (ListNode*)malloc(sizeof(ListNode));
	p1->data = 20;

	p2 = (ListNode*)malloc(sizeof(ListNode));
	p2->data = 30;
	p2->link = NULL;
	p1->link = p2;

	printf("p1->data = %d\n", p1->data);
	printf("p1->link->data = %d\n", p1->link->data);
	printf("p2->data = %d\n", p2->data);

}
