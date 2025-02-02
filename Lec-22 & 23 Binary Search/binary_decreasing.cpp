/*  Given an array of integers arr which is sorted in decreasing order,
    and an integer target, write a function to search key in arr.
    If key exists, then return its index.
*/

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    // end,start, mid;
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // Mid ko find karo
        mid = start + (end - start) / 2;

        // arr[mid==key]
        if (arr[mid] == key)
            return mid;

        // arr[mid]<key
        else if (arr[mid] > key)
            start = mid + 1;

        // arr[mid]>key
        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the number of element in array: ";
    cin >> n;
    cout << "Enter the element in decreasing order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    cout << "Your index is: " << BinarySearch(arr, n, key) << endl;
    return 0;
};