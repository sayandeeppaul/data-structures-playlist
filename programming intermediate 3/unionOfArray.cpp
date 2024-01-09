#include <iostream>
#include <set>
using namespace std;

void unionArray(int arr1[],int n1,int arr2[],int n2){
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int unionArray[st.size()];
    int size = sizeof(unionArray)/sizeof(unionArray[0]);
    int index=0;
    for(auto it:st){
        unionArray[index++]=it;
    }
    for(int i=0;i<size;i++){
        cout<<unionArray[i]<<" ";
    }
}

int main()
{
    int arr1[9] = {1,0,2,0,3,0,4,0,5};
    int arr2[5]={11,2,44,55,3};
    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    unionArray(arr1,length1,arr2,length2);
    return 0;
}
