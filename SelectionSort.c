/*
1. 현재 unsorted 된 int들 중에서 가장 작은 값을 찾는다.
2. 그 값을 sorted list에 추가한다
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void SelectionSort(int unSorted[], int n);
void main(void){
    int n;
    printf("Make random numbers.\n");
    printf("Enter numbers: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
    printf("Unsorted list\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    SelectionSort(arr, n);
    
    printf("\nSorted list\n");
    
    for(int i=0; i< n ; i++)
        printf("%d ", arr[i]);

}



void SelectionSort(int unSorted[], int n){
    int temp, min;
    for(int i = 0; i < n - 1; i++){
        int min = i; 
        for(int j = 1 + i ; j < n ; j++)
            if(unSorted[min] > unSorted[j])
                min = j;
        SWAP(unSorted[i],unSorted[min] ,temp);   
    }
}
