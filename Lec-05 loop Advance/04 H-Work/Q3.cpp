/*
    3.Take a number in input (ex n) and print the corresponding month to it. 
    Ex: for n=1, print january, n=2, print feburary like this you need to give output.
    It is given that n will be greater than 0 and less than 13.
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num==1)
    {
        cout<<"January";
    }
    else if(num==2)
    {
        cout<<"February";
    }
    else if(num==3)
    {
        cout<<"March";
    }
    else if(num==4)
    {
        cout<<"April";
    }
    else if(num==5)
    {
        cout<<"May";
    }
    else if(num==6)
    {
        cout<<"June";
    }
    else if(num==7)
    {
        cout<<"July";
    }
    else if(num==8)
    {
        cout<<"August";
    }
    else if(num==9)
    {
        cout<<"September";
    }
    else if(num==10)
    {
        cout<<"October";
    }
    else if(num==11)
    {
        cout<<"November";
    }
    else if(num==12)
    {
        cout<<"December";
    }
    else
    {
        cout<<"Invalid Months";
    }
    return 0;
}