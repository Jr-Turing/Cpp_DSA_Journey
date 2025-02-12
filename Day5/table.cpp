#include<iostream>
using namespace std;

int main()
{
    // int n,i;
    // cout<<"Enter the table: ";
    // cin>>n;

    // for(i=1; i<=10; i+=1)
    //     cout<<n<<"*"<<i<<"= "<<n*i<<endl;

    // 2nd method to print table
    int n,i;
    cout<<"Enter the table: ";
    cin>>n;

    for(i=n; i<=10*n; i+=n)
        cout<<i<<endl;
}