#include <iostream>

using namespace std;

int main()
{
    int firstTerm = 10;
    int secondTerm =20;
    int term;
    cout<<"Enter the term : ";
    cin>>term;
    cout<<firstTerm<<" "<<secondTerm;
    int nextTerm;
    for(int i = 2; i<term;i++){
        nextTerm=firstTerm+secondTerm;
        cout<<" "<<nextTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        
    }

    return 0;
}
