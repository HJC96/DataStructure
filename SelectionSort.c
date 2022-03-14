/*
1. 현재 unsorted 된 int들 중에서 가장 작은 값을 찾는다.
2. 그 값을 sorted list에 추가한다
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void SelectionSort(int unSorted[]);
void main(void){

    int arr[10] = {9,8,1,3,5,2,7,60,4,0};
    SelectionSort(arr);
    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);

}



void SelectionSort(int unSorted[]){
    int temp, min;
    for(int i = 0; i < 9; i++){
        int min = i; 
        for(int j = 1 + i ; j < 10 ; j++)
            if(unSorted[min] > unSorted[j])
                min = j;
        SWAP(unSorted[i],unSorted[min] ,temp);   
    }
}
