// Print inverted number sequence triangle.
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1 
*/
#include<iostream>
using namespace std;

int main()
{
    // 1st method
    int row, col;
    
    // for(row=5; row>=1; row--)
    // {
    //     for(col=1; col<=row; col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // 2nd method
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row+1; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
};