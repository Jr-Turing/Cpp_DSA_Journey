//Print square of n natural numbers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i = 1; i <= n; i += 1)
    {
        cout<<i<<"square is: ";
        cout<<i*i<<endl;
    }
}