// Q)
/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        // print Space
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        // Number Print
        for(col=1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}