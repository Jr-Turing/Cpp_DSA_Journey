// square of sum n natural number by using loop
#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1; i<=n; i+=1)
    {
         sum+=i*i;
    }
    cout<<sum;
}