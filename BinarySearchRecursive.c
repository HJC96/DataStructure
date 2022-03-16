#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int BinaryS(int Sorted[], int SearchN, int left, int right);
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

    if(BinaryS(arr, 249, 0, n-1) >= 0)
        printf("\nLocation of SearchNum: %d\n",BinaryS(arr, 249, 0, n-1));
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

int BinaryS(int Sorted[], int SearchN, int left, int right){
    if(left<=right){ // 등호가 반드시 들어가야함!
        int middle = (left + right)/2;
        if(SearchN > Sorted[middle]){
            return BinaryS(Sorted, SearchN, middle + 1, right) ;
        }
        else if(SearchN < Sorted[middle]){            
            return BinaryS(Sorted, SearchN, left, middle - 1) ;            
        }
        else{           
            return middle;
        }   
    }
    

    return -1;
}
