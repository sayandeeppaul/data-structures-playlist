#include <iostream>
using namespace std;

int main()
{
    int arr[5]={2,6,5,8,11};
    int kGiven=14;
    int flag=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]+arr[j]==kGiven){
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }

    return 0;
}

// Greedy Algorithm (Only in sorted array)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={2,5,6,8,11};
    int kGiven=14;
    int flag=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=len - 1;
    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum==kGiven){
            flag=1;
            break;
        }
        else if(sum<kGiven){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }

    return 0;
}
