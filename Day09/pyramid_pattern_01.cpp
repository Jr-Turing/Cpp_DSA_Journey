#include<iostream>
using namespace std;

int main ()
{
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        // Space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        // Print *
        for(col=1; col<=2*row-1; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
};