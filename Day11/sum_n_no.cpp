#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1; // initialize
    do{
        // cout<<i<<endl;
        cout<<n*i<<endl;
        i++; // upadate
    }while(i<=10); // break condition
    //while(i<=n);
}