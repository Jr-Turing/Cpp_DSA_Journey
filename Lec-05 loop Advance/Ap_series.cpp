#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=n; i<=100; i+=3)
        cout<<i<<" ";
}