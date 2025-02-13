// Q)
/*
        A
      A B
    A B C
  A B C D
A B C D E
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
        // Space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        // Char print
        // for(char name='A';name<='A'+row-1; name++)
        // {
        //     cout<<name<<" ";
        // }
        for(col=1; col<=row; col++)
        {
            char name = 'A'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
};