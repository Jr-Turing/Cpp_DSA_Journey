/* Printing 5 x 5 grid of characters incrementing from 'a' to 'e' across the rows.
a a a a a 
b b b b b 
c c c c c
d d d d d
e e e e e
*/
#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1; row<=5; row++)
    {
        char name = 'a' + row-1; //ASCII Value of a is 97
        for(col=1; col<=5; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}