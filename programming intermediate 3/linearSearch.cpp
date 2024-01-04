#include <iostream>
using namespace std;

void linearSearch(int arr[],int n,int s){
    int flag=0;
    for(int i =0 ; i<n;i++){
        if(arr[i]==s){
            flag=1;
            break;
        }
    }
    if(flag==1){
       cout<<"The element is present";
    }
    else{
        cout<<"The elemnt is not present";
    }
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int search = 3;
    linearSearch(arr,length,search);
    return 0;
}
