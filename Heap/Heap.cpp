#include <iostream>

using namespace std;
#define SIZE_HEAP 10
#define FULL(n) (n == SIZE_HEAP - 1)
#define EMPTY(n) (!n)

int max_heap[10] = {0, 21, 13, 8, 11, 7, 5, 3}; // idx 1부터 시작
int cursor = 7;

void push(int item)
{
    int i;
    if(FULL(cursor))
        exit(0);
    i = ++cursor;
    while(max_heap[i/2] < item && i != 1)
    {
        max_heap[i] = max_heap[i/2];
        i /= 2;
    }
    max_heap[i] = item;
}

void pop()
{
    int parent, child, item, temp;
    if(EMPTY(cursor))
        exit(0);
    item = max_heap[1];
    temp = max_heap[cursor--];
    parent = 1;
    child = 2;
    while(child <= cursor) // O(log2(n+1))
    {
        if(child < cursor && max_heap[child] < max_heap[child+1])
            child++;
        if(temp > max_heap[child])
            break;
        max_heap[parent] = max_heap[child];
        parent = child;
        child *= 2;
    }
    max_heap[parent] = temp;
    // return item;
}

int main()
{
    push(10);
    for(int i=1;i<9;i++)
        printf("%d ", max_heap[i]); // 21 13 8 11 7 5 3 10
    printf("\n"); 
    push(30); 
    for(int i=1;i<10;i++)
        printf("%d ", max_heap[i]); // 30 21 8 13 7 5 3 10 11

    printf("\n"); 
    pop();
    for(int i=1;i<10;i++)
        printf("%d ", max_heap[i]); // 21 13 8 11 7 5 3 10 11
    printf("\n");     
    pop();
    for(int i=1;i<9;i++)
        printf("%d ", max_heap[i]); // 13 11 8 10 7 5 3 10
}
