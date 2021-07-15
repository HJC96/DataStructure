#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef int item;
typedef struct ListNode {
	item data;
	struct ListNode* link;
}ListNode;



int main(int argc, char* argv[]) {
	ListNode *head, *current, *new_node;
	head = current = new_node = NULL;
	item n;

	printf("정수 데이터를 입력하시오: ") ; 
	while (scanf_s("%d\n", &n) != EOF) { // ctrl + z 를 세번 반환해야 EOF
		new_node=(ListNode *)malloc(sizeof(ListNode));
		new_node->data = n;
		new_node->link = NULL;

		if (head == NULL)
		{
			head = new_node;
			current = new_node;
		}
		else
		{
			current->link = new_node;
			current = new_node;
		}

	}
	printf("연결리스트 원소들은 다음과 같습니다. \n");
	current = head;
	while (current != NULL) {
		printf("%d \n", current->data);
		current = current->link;
	}
	return 0;
}
