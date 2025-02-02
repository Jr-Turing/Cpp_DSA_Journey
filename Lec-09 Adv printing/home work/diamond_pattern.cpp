#include<iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter the input: ";
    cin>>n;

    // Upper half of the diamond
    for(row=1; row<=n; row++)
    {
        // print Space
        for(col=1; col<=n-row; col++)
        {
            cout<<"   ";
        }
        // print *
        for(col=1; col<=2*row-1; col++)
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }

    // Lower half of the diamond (inverted pyramid)
    for(row=n; row>=1; row--)
    {
        // print Space
        for(col=1; col<=n-row; col++)
        {
            cout<<"   ";
        }
        // print *
        for(col=1; col<=2*row-1; col++)
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
    return 0;
}