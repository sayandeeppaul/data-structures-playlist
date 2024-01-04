#include <iostream>
#include <array>
using namespace std;

int secondLargestFunc(int* arr, int length){
    int largest = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int secondLargest = arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int main()
{
    int arr[5] = {3, 1, 5, 7, 4};
    int secondLargestElem = secondLargestFunc(arr, 5);
    cout << "The Second Largest Element of the array is : " << secondLargestElem;

    return 0;
}
