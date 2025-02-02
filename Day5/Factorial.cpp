// print factorial of n 
#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=2; i<=n; i+=1)
    {
        fact*=i;
    }
    
    cout<<fact;
}