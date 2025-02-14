#include<iostream>
using namespace std;

int main()
{   // Array Declare
    // int arr[5] = {1,2,3,4,5}; // method 1
    // int arr[] = {1,2,3,4,5,6}; // method 2
    // int arr[6] = {1,2,3}; // method 3
    // int arr[6] ={0}; // method 4
    int arr[6] = {0}; // method 5
    for(int i = 0; i<6; i++)
    cin>>arr[i];
    
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";

    return 0;
}