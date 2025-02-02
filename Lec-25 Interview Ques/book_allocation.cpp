// Q) Allocate minimum number of pages
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M)
    {
        // code here
        if(M>N)
        return -1;

        int start = 0, end = 0, mid, ans;
        for(int i=0; i<N; i++)
        {
            start = max(start,A[i]);
            end += A[i];
        }

        while (start <= end)
        {
            mid = start +(end - start)/2;

            int pages = 0, count = 1;
            for(int i=0; i<N; i++)
            {
                pages += A[i];
                if(pages > mid)
                {
                    count++;
                    pages = A[i];
                }
            }
            if(count <= M)
            {
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans;
    }
};