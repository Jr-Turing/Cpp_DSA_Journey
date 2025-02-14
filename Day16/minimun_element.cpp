#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2,3,1,7,8};
    int ans = INT_MAX;
    // Min value
    
    for(int i=0; i<5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }

    cout<<ans;
    return 0;
}