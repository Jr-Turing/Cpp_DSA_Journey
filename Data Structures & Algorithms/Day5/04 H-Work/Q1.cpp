// Q1.Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    if(a>b)
    {
        cout<<"1st number is bigger";
    }
    else
    {
        cout<<"2nd numnber is bigger";
    }
    return 0;
};