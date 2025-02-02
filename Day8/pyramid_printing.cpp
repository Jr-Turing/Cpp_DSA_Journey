// Q) Printing Pyramid Pattern of Asterisks.
/*
                *
             *  *
          *  *  *
       *  *  *  *
    *  *  *  *  *
*/

#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(row=1; row<=n; row++)
    {
        // space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        // start print
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
};