/* print number from 1 to 5 in row as well as col like that..
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5 
*/
#include<iostream>
using namespace std;

int main()
{
    int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
};