#include <iostream>
#include <array>
using namespace std;

int smallest(int* arr, int length){
    int smallest = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[5] = {3, 1, 5, 7, 4};
    int smallestElem = smallest(arr, 5);
    cout << "The Largest Element of the array is : " << smallestElem;

    return 0;
}
