#ifndef LINKEDLIST_H    // CALC_DATA_H가 정의되어 있지 않다면
#define LINKEDLIST_H    // CALC_DATA_H 매크로 정의

typedef int item;
typedef struct ListNode {
	item data;
	struct ListNode* link;
}ListNode;

extern void insert_node(ListNode** phead, ListNode* p, ListNode* new_node);
extern void *create_node(item data, ListNode* link);
extern void removeFirst(ListNode** phead);
extern void removeLast(ListNode** phead);
extern int get_sum(ListNode* head);
extern int get_min(ListNode* head);
extern void delete_max(ListNode** head);
extern void display_list(ListNode* head);
extern ListNode* concat(ListNode* head1, ListNode* head2);


#endif LINKEDLIST_H    // CALC_DATA_H 매크로 정의
