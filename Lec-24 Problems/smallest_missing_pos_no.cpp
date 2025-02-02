// Q) Find Smallest missing positive number.
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int smallestMissingPos(vector<int> &arr)
    {
        int start = 0, end = arr.size() - 1, mid, ans = 1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (arr[mid] - mid - 1 >= 1)
            {
                ans = mid + 1;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    vector<int> arr = {1,2,3,4,6,7};
    cout<< "Smallest Missing Positive Number: " << solution.smallestMissingPos(arr) << endl;
    return 0;
}