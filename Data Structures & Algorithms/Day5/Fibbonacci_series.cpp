/*
    Print Fibbonacci series
    [0,1,1,2,3,5,8,13,21,34,....]
*/ 

#include<iostream>
using namespace std;
 
int main()
{
    int n,i,last=0,pre=1,curr;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=3; i<=n; i++)
    {
        curr = pre + last;
        last = pre;
        pre = curr;
    }
    cout<<"Fibbonacci series is : "<<curr;
}