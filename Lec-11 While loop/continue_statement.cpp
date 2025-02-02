#include<iostream>
using namespace std;

int main()
{
    // continue statement
    int i;
    for(i=1; i<=100; i++)
    {
        if(i%4==0)
        continue; // continue means skip 

        cout<<i<<" ";
    }
}