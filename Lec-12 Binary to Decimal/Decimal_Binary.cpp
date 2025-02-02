#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans=0, mul=1;

    while(num>0)
    {
        // reminder
        rem = num%2; // we can use bitwise operator num &1
        // Quotient
        num /= 2; // num>>1;
        // ans
        ans += rem*mul;
        // mult
        mul*=10;
    }
    cout<<ans<<endl;
}