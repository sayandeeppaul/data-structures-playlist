#include <iostream>
#include <array>
#include <set>
using namespace std;

void removeDuplicate(int arr[],int n){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8] = {3,3,1, 1, 5, 7, 4,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    removeDuplicate(arr,length);
    return 0;
}
