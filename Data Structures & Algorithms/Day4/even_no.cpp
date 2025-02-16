// print all even number between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    // for(int i = 2; i <= num; i = i+2)
    for(int i = 1; i <= num; i = i+1)
    // {
    //     cout<<i<<endl;
    // }
    {
        if(i%2 == 0)
        {
            cout<<i<<" ";
        }
    }
}