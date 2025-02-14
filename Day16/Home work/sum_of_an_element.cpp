#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {56,82,96,216,70};
    int sum = 0;

    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    cout<<"Sum of an array is : "<<sum<<endl;

    return 0;
};