#include <iostream>

using namespace std;

int main()
{
    int arr[10]={1,2,3,1,1,1,4,2,3};
    int kGiven=3;
    int len = sizeof(arr)/sizeof(arr[0]);
    int longestArray=0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==kGiven){
                longestArray=max(longestArray,((j - i )+ 1));
            }
        }
    }
    cout<<"The Longest Subarray of given sum us : "<<longestArray;

    return 0;
}
