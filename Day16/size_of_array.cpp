// Find number of element present in Array.
#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2,3,1,7,8};
    // int a;
    // char b;
    // float c;
    // double d;
    // bool e;

    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(b)<<endl;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(e)<<endl;
    // cout<<sizeof(arr)<<endl;

    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    return 0;
};