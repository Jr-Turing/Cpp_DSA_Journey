//Q) Print Repeated character triangle Pattern.
/*
 a
 b b
 c c c 
 d d d d 
 e e e e e
 */
#include<iostream>
using namespace std;

int main()
{
   int row,col;

   for(row=1; row<=5; row++)
   {
        char name = 'a'+ row-1;
        for(col=1; col<=row; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
   }
   return 0;  
};
