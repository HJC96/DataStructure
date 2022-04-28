#include <stdio.h>

int main(){
    int *p1; // 1차원 배열 포인터
    int (*p2)[3]; // 2차원 배열 포인터 (열의 크기가 3)
    
    int arr1[2] = {10, 
                   11};
    int arr2[5][3] = { 
                      {20, 30, 40}, 
                      {50, 60, 70}, 
                      {80, 90, 100},
                      {110, 120, 130},
                      {140, 150, 160}
                     };

    int row1 = sizeof(arr1) / sizeof(int);
    p1 = arr1; // 배열은 주소값을 나타내므로 &를 쓸 필요 없다.

    printf("==================================\n");
    printf("size of p1: %lu \n", sizeof(p1));
    printf("size of p2: %lu \n", sizeof(p2));
    printf("==================================\n");

    for(int i =0; i<row1;i++){
        printf("addr of p1: %p, value: %d \n", p1+i, *(p1+i));
    }
    printf("==================================\n");

    
    int row2 = sizeof(arr2) / sizeof(arr2[0]);
    int col2 = sizeof(arr2) / row2 /sizeof(int);
    
    p2 = arr2; // 배열은 주소값을 나타내므로 &를 쓸 필요 없다. 

    for(int i =0; i<row2;i++){
        for(int j =0; j<col2;j++){
            printf("addr of p2: %p, value: %d \n", *(p2+i)+j, *(*(p2+i)+j));
        }
        printf("-----------------------------------\n");
    }


    return 0;
}
