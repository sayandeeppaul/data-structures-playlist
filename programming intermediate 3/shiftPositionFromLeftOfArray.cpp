// First Approarch

#include <iostream>
#include <array>
#include <set>
using namespace std;

void shiftPositionFromLeft(int arr[],int n,int s){
    if(s==0)return;
    s=s%n;
    int temp[s];
    for(int i=0;i<s;i++){
        temp[i]=arr[i];
    }
    for(int i = s;i<n;i++){
        arr[i-s]=arr[i];
    }
    int index=0;
    for(int i = n-s;i<n;i++){
        arr[i]=temp[index];
        index++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int shift = 3;
    shiftPositionFromLeft(arr,length,shift);
    return 0;
}


// Second Approach 

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void shiftPositionFromLeft(int arr[],int n,int s){
    if(s==0)return;
    s=s%n;
    reverse(arr,arr+s);
    reverse(arr+s,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int shift = 3;
    shiftPositionFromLeft(arr,length,shift);
    return 0;
}

