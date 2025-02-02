#include<iostream>
using namespace std;

int main()
{
// class Solution{
// public:
    int reverse(int x);
    {
        int x;
        int ans = 0, rem;
        while(x!=0)
        {
            rem = x%10;
            x/=10;
            ans = ans*10+rem;
        }
        return ans;
    }
};