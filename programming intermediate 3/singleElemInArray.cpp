// Brute Force
#include <iostream>
using namespace std;

int main()
{
    int arr[9]={1,1,0,2,2,3,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<len;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count!=2){
            cout<<"The Number that appears one's in the array is : "<<num;
            break;
        }
    }

    return 0;
}


// Optimal using XOR Operator

#include <iostream>

using namespace std;

int main()
{
    int arr[9]={1,1,0,2,2,3,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int XOR=0;
    for(int i=0;i<len;i++){
        XOR=XOR^arr[i];
    }
    cout<<"The Element Single appears in the array is : "<<XOR;

    return 0;
}
