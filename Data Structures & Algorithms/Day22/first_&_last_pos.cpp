// Q1) First & last position of element in sorted Array.
/* Problems statement : 
Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value. */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int start=0, end = nums.size()-1, first=-1, last=-1, mid;

        // Find Fist
        while(start<=end)
        {
            mid = start+(end-start)/2;

            if(nums[mid]==target)
            {
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]<target)
            start = mid + 1;
            else
            end = mid - 1;
        } 

        // Find last
        start = 0; end = nums.size()-1;
        while(start<=end)
        {
            mid = start+(end-start)/2;

            if(nums[mid]==target)
            {
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]<target)
            start = mid + 1;
            else
            end = mid - 1;
        } 

        vector<int>a(2);
        a[0] = first;
        a[1] = last; 

        return a;
    }
    
};