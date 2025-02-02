#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int start = 0, end = arr.size() - 1, mid, ans = arr.size();

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (arr[mid] - mid - 1 >= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans + k;
    }
};

int main()
{
    // Create an instance of the Solution class
    Solution solution;

    // Test case 1:
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    int result1 = solution.findKthPositive(arr1, k1);
    cout << "The " << k1 << "th positive missing number is: " << result1 << endl;

    // Test case 2:
    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    int result2 = solution.findKthPositive(arr2, k2);
    cout << "The " << k2 << "th positive missing number is: " << result2 << endl;

    return 0;
}