#include<iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter the input: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        // Print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        // Print space
        for(col=1; col<=2*n-2*row; col++)
        {
            cout<<"  ";
        }
        // Print *
        for(col=1; col<=row; col++)
        {
            cout<<"* "; 
        }
        cout<<endl;
    }

    for(row=3; row>=1; row--)
    {
        // Print *
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        // Print space
        for(col=1; col<=2*n-2*row; col++)
        {
            cout<<"  ";
        }
        // Print *
        for(col=1; col<=row; col++)
        {
            cout<<"* "; 
        }
        cout<<endl;
    }
    return 0;
};