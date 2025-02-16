#include<iostream>
using namespace std;

// bool Prime(int n)
void Prime(int n)
{
    if(n<2)
    {
        // return 0;
        cout<<0<<endl;
        return;
    }
    

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            // return 0;
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
    return ;
    // return 1;
}

// int Fact(int n)
int Fact(int n=3) // Default parameter
{
    int ans = 1;
    for(int i=1; i<=n; i++)
    ans *= i;

    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    cout<<Fact();
    cout<<endl;
    // A is prime or not
    Prime(a);
    //cout<<Prime(a)<<endl;
    // A ka Factorial
    cout<<Fact(a)<<endl;
    // B is prime or not
    Prime(b);
    // cout<<Prime(b)<<endl;
    // B ka Factorial
    cout<<Fact(b)<<endl;
    // B-A is prime or not
    Prime(b-a);
    // cout<<Prime(b-a)<<endl;
    // B-A ka factorial
    cout<<Fact(b-a)<<endl;
}