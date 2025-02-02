#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    // cout<<arr[5];
    cout<<sizeof(arr)<<" "<<endl;
    cout<<sizeof(arr[0])<<" "<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<" ";
    cout<<endl;

    int a;
    char b;
    bool c;
    cout<<sizeof(a)<<" "<<endl;
    cout<<sizeof(b)<<" "<<endl;
    cout<<sizeof(c)<<" ";
    
    return 0;
}