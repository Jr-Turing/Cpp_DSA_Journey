#include<iostream>
using namespace std;

int main()
{
    // int row;
    // char col;

    // for(row=1; row<=5; row++)
    // {
    //     for(col='a';col<='e';col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    int row,col;

    for(row=1; row<=5; row++)
    {
        // char name = 'a';
        for(col=1;col<=5; col++)
        {
            char name = 'a'+col-1;
            // cout<<name+col-1<<" ";
            cout<<name<<" ";
        }
        cout<<endl;
    }
}