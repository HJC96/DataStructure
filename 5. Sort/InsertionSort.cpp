#include <iostream>

#define SWAP(x,y,t) ((t = x), (x = y), (y = t))

using namespace std;
void InsertionSort(int arr[], int size){
    int tmp;
    for(int i=1;i<size;i++){
        int idx = i;
        while(arr[idx-1]>arr[idx] && idx>=1){
            SWAP(arr[idx-1], arr[idx]);
        }
    }
}

int main()
{
    int arr[10] = {9,3,1,2,7,4,8,6,5,0};
    cout << "Before sort  " ;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    InsertionSort(arr, 10);
    
    cout << "After sort   " ;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}
