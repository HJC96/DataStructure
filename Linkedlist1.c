//                             Linkedlist vs Array
//                             가변크기   vs 고정크기
//                   삽입, 삭제 효율적    vs  삽입, 삭제시 데이터의 이동 발생
//            임의의 위치에 대한 접근 (x) vs 임의의 위치에 인덱스를 통한 접근이 쉽다
// 순차적으로 데이터에 접근할 경우 느리다 vs 순차적인 접근시 매우 빠르다

#include "stdio.h"
#include "string.h"
#include "stdlib.h"


typedef int item; // int에 item이란 별명을 붙여줬다고 생각하면 쉬움.
typedef struct ListNode {
	item data;
	struct Listnode* link;
}ListNode;
int main(int argc, char* argv[]) {
	ListNode node = { 100, NULL };
	ListNode* list = &node;

	printf("node.data = %d\n", node.data);
	printf("(*list).data = %d\n", (*list).data);
	printf("list->data = %d\n", list->data);

	return 0;
}
