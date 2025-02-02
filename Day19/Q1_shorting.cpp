// GFG question
#include<iostream>
using namespace std;

int main()
{
    int n = arr.size();
    int i,j,n;

    for(i=0; i<n-1; i++)
    {
        int index = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }

        swap(arr[i],arr[index]);
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
};