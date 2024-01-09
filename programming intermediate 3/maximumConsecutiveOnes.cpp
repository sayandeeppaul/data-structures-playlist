#include <iostream>
using namespace std;

int main()
{
    int arr[9]={1,1,0,1,1,1,0,1,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    int count=0;
    for (int i =0;i<len;i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    cout<<"The Maximum consequtive one's appear in the following array is : "<<maxi;

    return 0;
}
