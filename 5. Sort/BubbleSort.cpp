#include <iostream>

#define SWAP(x,y,t) ((t = x), (x = y), (y = t))

using namespace std;
void BubbleSort(int arr[], int size){
    int tmp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j] > arr[j+1]){
                SWAP(arr[j], arr[j+1], tmp);
            }
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
    
    BubbleSort(arr, 10);
    
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
