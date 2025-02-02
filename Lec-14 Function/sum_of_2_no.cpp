// Sum of two numbers by using function.
#include<iostream>
using namespace std;

// int Sum(int m, int n) // Function declare
void Sum(int m, int n) // Multiple parameter
{
    int ans = m+n; // Function define
    // return ans;
    cout<<ans<<endl;
}

int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}

void fun()
{
    cout<<"Hello coder Army\n";
}

int main()
{
    int a,b;
    cout<<"Enter the 2 no: ";
    cin>>a>>b;

    // Function call
    //int ans = Sum(a,b);
    Sum(a,b);
    // cout<<"Sum is : "<<Sum(a,b);
    // cout<<endl;
    cout<<"multi is : "<<Mul(a,b);
    cout<<endl;

    fun();
};
