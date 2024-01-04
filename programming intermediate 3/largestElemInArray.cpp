#include <iostream>
#include <array>
using namespace std;

int largest(int* arr, int length){
    int largest = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[5] = {3, 1, 5, 7, 4};
    int largestElem = largest(arr, 5);
    cout << "The Largest Element of the array is : " << largestElem;

    return 0;
}
