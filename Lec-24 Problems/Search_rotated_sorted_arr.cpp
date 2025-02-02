// Search in Rotated Sorted Array
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,target;
    int start = 0, end = n-1, mid;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        // I find my element
        if(arr[mid]==target)
        return mid;
        // left side sorted
        else if(arr[mid]>arr[0])
        {
            if(arr[start]<=target &&arr[mid]>target)
            end = mid-1;
            else
            start = mid+1;
        }
        // Right side sorted
        else
        {
            if(arr[mid]<target&&arr[end]>=target)
            start = mid+1;
            else
            end = mid-1;
        }
    }  
    return -1;  
};