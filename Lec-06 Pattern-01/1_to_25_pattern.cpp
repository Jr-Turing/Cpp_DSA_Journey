#include<iostream>
using namespace std;

int main()
{

    // Method 1

    // int row,col,count=1;
    // for(row=1; row<=5; row++)
    // {
    //     for(col=1; col<=5; col++)
    //     {
    //         cout<<count<<" ";
    //         count = count + 1;
    //     }
    //     cout<<endl;
    // }

    // Method 2

    int row,col;
    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<<(row-1)*5+col<<" ";
        }
        cout<<endl;
    }
}