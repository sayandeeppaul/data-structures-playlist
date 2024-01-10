#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11]={2,1,2,1,0,0,1,0,2,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    // Replace the places in the original array
    for (int i = 0; i < cnt0; i++) arr[i] = 0;

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1;

    for (int i = cnt0 + cnt1; i < len; i++) arr[i] = 2;
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
