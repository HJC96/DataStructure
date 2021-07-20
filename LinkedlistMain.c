#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "LinkedList.c"



void main() {

	ListNode *list1 = NULL, *list2 = NULL;
	ListNode *p;

	insert_node(&list1, NULL, create_node(90, NULL));
	insert_node(&list1, NULL, create_node(80, NULL));
	insert_node(&list1, NULL, create_node(70, NULL));
	insert_node(&list1, NULL, create_node(60, NULL));
	insert_node(&list1, NULL, create_node(50, NULL));
	insert_node(&list1, NULL, create_node(40, NULL));

	printf("연결리스트 출력 \n");
	printf("list1 = ");
	display_list(list1);

	printf("\n연결리스트의 길이를 알아봅시다\n");
	int n = get_length(list1);
	printf("\nlist1의 노드는 %d 개 입니다\n", n);

	printf("\n연결리스트의 최대값을 알아봅시다\n");
	int m = get_max(list1);
	printf("\n연결리스트의 최대값은 %d 입니다\n", m);

	printf("\n최대값 %d를 삭제한 후의 연결리스트 \n", m);
	delete_max(&list1);
	
	display_list(list1);

	int min = get_min(list1);
	printf("list1의 최솟값은 %d 입니다\n", min);

	//printf("최솟값 %d를 삭제한 후의 연결리스트 \n", min);
	//delete_min(&list1);
	//display_list(list1);



}

