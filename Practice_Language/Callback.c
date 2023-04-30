#include <stdio.h>

#define SWAP(x,y,t) ((t = x), (x = y), (y = t))

void sort(int arr[], int size, int (*compare)(int,int)){
    int tmp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(compare(arr[j+1], arr[j])){
                SWAP(arr[j+1],arr[j],tmp);
            }
        }
    }

}

int ascending(int a, int b){
    return a < b;
}

int main(){
    int arr[] = {5, 2, 8, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, size, ascending);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}
