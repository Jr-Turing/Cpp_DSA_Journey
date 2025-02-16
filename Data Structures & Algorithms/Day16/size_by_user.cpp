#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    // int arr[size]
    int arr[1000]; // Always select constant type value not variable.
    for(int i=0; i<size; i++)
    cin>>arr[i];

    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";

    return 0;
};