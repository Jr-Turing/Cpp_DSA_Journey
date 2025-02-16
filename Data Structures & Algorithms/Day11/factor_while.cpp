#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1; // initalize

    while(i<=n) // break condition
    {
        if(n%i == 0)
        {
            cout<<i<<"  "; 
        }
        i++; // value update
    }
    return 0;
}