#include <iostream>

using namespace std;

void Merge(int arr[], int tmp[], int left, int mid, int right){
    int left_start = left;
    int right_start = mid+1;
    int idx=left;
    for(int i=left;i<=right;i++)
        tmp[i] = arr[i];

    while(left_start <= mid && right_start <= right){
        if(tmp[left_start] <= tmp[right_start]){
            arr[idx] = tmp[left_start];
            left_start++;
        }
        else{
            arr[idx] = tmp[right_start];
            right_start++;
        }
        idx++;
    }
    for(int i=0; i<=mid-left_start;i++){
        arr[idx+i]=tmp[left_start+i];
    }
}
void MergeSort(int arr[], int tmp[], int left, int right){
    int mid = (left+right)/2;
    if(left<right){
        MergeSort(arr, tmp, left, mid);
        MergeSort(arr, tmp, mid+1, right);
        Merge(arr, tmp, left, mid, right);
    }

}

int main()
{
    int arr[10] = {9,3,1,2,7,4,8,6,5,0};
    int tmp[10] ={0,};

    cout << "Before sort  " ;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    MergeSort(arr, tmp, 0, 9);
    
    cout << "After sort   " ;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

/*
output
Before sort  9 3 1 2 7 4 8 6 5 0 
After sort   0 1 2 3 4 5 6 7 8 9
*/
