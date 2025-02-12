// Q) Printing Factorial Sequence in Descending Order
/*
5
5 4
5 4 3
5 4 3 2 
5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=5; col>=5-row+1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
};