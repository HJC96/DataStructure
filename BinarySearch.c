#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int BinaryS(int Sorted[], int SearchN, int n);
void SelectionSort(int unSorted[], int n);

int main(){

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

    if(BinaryS(arr, 73, n) >= 0)
        printf("\nLocation of SearchNum: %d\n",BinaryS(arr, 73, n));
    else
        printf("\nError");
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

int BinaryS(int Sorted[], int SearchN, int n){
    int left = 0, right = n - 1;
    while(left<=right){ // 등호가 반드시 들어가야함!
        int middle = (int)((left + right)/2);
        if(SearchN > Sorted[middle]){
            left = middle + 1 ;
        }
        else if(SearchN < Sorted[middle]){
            right = middle - 1;
        }
        else{
            return middle;
        }   
    }
    return -1;
}
