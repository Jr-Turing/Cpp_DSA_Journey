// Q2) Find Minimum in Rotated Sorted Array

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& arr)
    {
        int start =0, end = arr.size()-1, ans = arr[0];

        while(start<=end)
        {
            int mid = start+(end-start)/2;
            // left side Sorted array

            if(arr[mid]>=arr[0])
            {
                start = mid+1;
            }

            // Right side Sorted array
            else
            {
                ans = arr[mid];
                end = mid-1;
            }
        }
        
        return ans;
    }

};