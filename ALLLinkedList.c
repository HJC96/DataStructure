#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "LinkedList.h"


void insert_node(ListNode** phead, ListNode* p, ListNode* new_node);
void *create_node(item data, ListNode* link);
void removeFirst(ListNode** phead);
void removeLast(ListNode** phead);
int get_sum(ListNode* head);
void remove_head(ListNode** phead);
void display_list(ListNode* head);


void insert_node(ListNode** phead, ListNode* p, ListNode* new_node)
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

//노드를 동적으로 생성하는 프로그램
void* create_node(item data, ListNode* link)
{
	ListNode* new_node;
	new_node = (ListNode*)malloc(sizeof(ListNode));
	if (new_node == NULL) {
		fprintf(stderr, "메모리 할당 에러 \n");
		exit(1);
	}
	new_node->data = data;
	new_node->link = link;
	return(new_node);
}

// 첫 노드의 삭제
void removeFirst(ListNode** phead)
{
	if (*phead == NULL)
		return;
	else {
		ListNode* removedNode;
		removedNode = *phead;
		*phead = (*phead)->link;
		free(removedNode);
	}
}

// 마지막 노드의 삭제

void removeLast(ListNode** phead)
{
	ListNode* prev = (*phead);
	ListNode* next;

	// NULL 연결리스트이면 제거할 노드가 없음
	if (prev == NULL)
		return;
	else if (prev->link == NULL) {
		free(prev);
		*phead = NULL;
		return;
	}

	// 연결리스트에 2개 이상의 노드가 있을 경우
	while (prev != NULL) {
		next = prev->link;
		// next 노드 다음에 노드가 없을 때 next 노드를 제거
		if (next->link == NULL)
		{
			prev->link = NULL;
			free(next);
			return;
		}
		else {
			prev = next;
		}
	}
}

int get_sum(ListNode* head)
{
	int sum = 0;

	ListNode* current = head;
	while (current != NULL) {
		//원소의 값 current->data를 sum에 누적하여 더한다
		sum = sum + current->data;
		current = current->link;
	}
	// 결과값 sum을 반환한다
	return sum;
}

// phead: 리스트의 헤드 노드를 참조하는 포인트 변수를 참조하는 변수
void remove_head(ListNode **phead) {
	if (*phead != NULL) {
		ListNode* tempHead; // 헤드노드를 임시로 참조하는 노드
		tempHead = *phead;
		*phead = (*phead)->link; // 헤드노드를 헤드 노드 다음 노드로 변경
		free(tempHead); // 원래 헤드노드를 삭제
	}
}

int get_max(ListNode* head)
{
	int max;
	ListNode* current = head;
	if (current != NULL)
		max = current->data;
	while (current != NULL) {
		if (current->data > max)
			max = current->data;
		current = current->link;
	}
	return max;
}
// 최솟값 구하기
int get_min(ListNode* head)
{
	int min;

	ListNode* current = head;
	if (current != NULL)
		min = current->data;

	while (current != NULL) {
		// 원소의 값 current->data를 검사하여 min보다 작으면 min을 변경
		if (current->data < min)
			min = current->data;
		current = current->link;
	}
	// 결과값 min을 반환
	return min;
}
 // 최댓값 제거
//void delete_max(ListNode** head)
//{
//	int max = 0;
//	ListNode* current = *head;
//	ListNode* prev = NULL, *next = NULL;
//
//	if (current == NULL) // NULL리스트이면 return
//		return;
//	else if (current->link == NULL) // 단일노드 리스트이면
//	{
//		*head = NULL; // head를 NULL로 하고
//		free(current); // current를 제거함
//	}
//	max = get_max(*head);
//
//	while (current->link != NULL) {
//		prev = current;
//		next = current->link;
//
//		if (current->data == max) { // current 노드가 max 값을 가질 때
//			remove_node(head, NULL, current);
//			current = next;
//		}
//		else if (next->data == max) {
//			remove_node(head, current, next);
//			current = prev;
//		}
//		else
//			current = current->link;
//	}
//}

// 두 연결리스트를 병합함
// 두 연결리스트의 head가 입력값
ListNode* concat(ListNode* head1, ListNode* head2)
{
	ListNode* p;
	if (head1 == NULL) return head2;
	else if (head2 == NULL) return head1;
	else {
		p = head1;
		// 연결리스트의 마지막까지 순회하여
		while (p->link != NULL)
			p = p->link;
		// 마지막노드의 link가 head2를 참조하도록
		p->link = head2;

		return head1;
	}
}

void display_list(ListNode* head) {
	ListNode* curr = head;
	while (curr != NULL) {
		printf("%d ", curr->data);
		curr = curr->link;
	}
}
