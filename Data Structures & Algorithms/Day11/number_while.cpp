// Print number using While loop.
#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1; // initalize

    while(i<=10) /// Break condition 
    {
        cout<<i<<endl;
        i++; // update
    }
    return 0;
}