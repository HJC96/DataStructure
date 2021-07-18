#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "insert.h"




void remove_head(ListNode** phead);
void display_list();
void main() {

	ListNode* head = NULL;
	ListNode* node1;
	ListNode* node2;

	node1 = (ListNode*)malloc(sizeof(ListNode));
	node1->data = 100;
	node1->link = NULL;
	node2 = (ListNode*)malloc(sizeof(ListNode));
	node2->data = 200;
	node2->link = NULL;

	insert_node(&head, NULL, node1);
	insert_node(&head, NULL, node2);
	printf("node1, node2 삽입 후 결과 \n");
	display_list(head);

	// 헤드노드를 삭제 함
	remove_head(&head);
	printf("헤드노드 삭제 후 \n");
	display_list(head);

	// 헤드노드를 삭제 함
	remove_head(&head);
	printf("헤드노드 삭제 후\n");
	display_list(head);


}

//phead: 리스트의 헤드 노드를 참조하는 포인트 변수를 참조하는 변수
void remove_head(ListNode** phead) {
	if (*phead != NULL) {
		ListNode* tempHead; // 헤드노드를 임시로 참조하는 노드
		tempHead = *phead;
		*phead = (*phead)->link; // 헤드노드를 헤드 노드 다음 노드로 변경
		free(tempHead); // 원래 헤드노드를 삭제
	}
}

void display_list(ListNode* node){
	if(node != NULL)
		printf("(node = %d %d)\n", node->data, node->link->data);
	else
		printf("(node = %d)\n", node->data);

}
