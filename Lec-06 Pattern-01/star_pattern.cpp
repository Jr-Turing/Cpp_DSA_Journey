#include<iostream>
using namespace std;
// one time star printing.. 
int main()
{
    // int n,i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for(i=1; i<=n; i++)
    // {
    //     cout<<"*"<<" ";
    // }

// 5 times star printing...

    int n,i,j;
    cout<<"Enter the number: ";
    cin>>n;

    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
};