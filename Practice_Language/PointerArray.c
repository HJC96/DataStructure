#include <stdio.h>

int main(){
    int *p1[4];  // 포인터 배열 선언
    char *p2[4]; // 포인터 배열 선언

    int arr1[4] = {10, 11, 12, 13};
    char arr2[4][10] = {
                        {"SEOUL"},
                        {"BUSAN"},
                        {"PARIS"},
                        {"LA"}
      };

    printf("==================================================\n");
    printf("size of p1: %lu \n", sizeof(p1));
    printf("size of p2: %lu \n", sizeof(p2));
    printf("==================================================\n");

    for(int i =0; i<4;i++){
        p1[i] = &arr1[i]; 
        printf("value of p1[%d]: %p, reference value: %d \n",i, p1[i], *(p1[i]));
    }
    printf("==================================================\n");

    for(int i =0; i<4;i++){
        p2[i] = arr2[i]; // 배열은 주솟값을 반환
        printf("value of p2[%d]: %p, reference value: %s \n",i, p2[i], p2[i]);
    }
    printf("==================================================\n");
    return 0;
}