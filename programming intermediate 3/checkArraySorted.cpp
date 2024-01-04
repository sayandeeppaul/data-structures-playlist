#include <iostream>
#include <array>
using namespace std;

bool checkSorted(int* arr, int length){
    for(int i = 0 ;i<length;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[5] = {3, 1, 5, 7, 4};
    if(checkSorted(arr,5))
        cout<<"The array is sorted";
    else
        cout<<"The array is not sorted";

    return 0;
}
