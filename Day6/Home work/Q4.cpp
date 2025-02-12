/*
   Fourth Pattern:
    F G H I J K  
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
*/

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=6; col++)
        {
            char name = 'F' + col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}