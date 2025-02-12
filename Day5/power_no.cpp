#include<iostream>
using namespace std;

int main()
{
    int n,pow,i,num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;

    num = n;
    for(i=1;i<pow;i+=1)
    {
        num*=n;
    }

    cout<<num;    
}