// Q) Print Row index with Maximum Sum

#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // column wise
    for(int j=0; j<col; j++)
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN; 

    for(int i=0; i<row; i++)
    {
        int total = 0;
        for(int j=0; j<col; j++)
        total += arr[i][j];

        if(total>sum)
        {
            sum = total;
            index = i;
        }
    }
    cout<<index<<" ";
}

int main()
{
    // create 2d array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    // Find an element in our array
    int x = 17;

    // Print row index with maximum sum
    printrowmax(arr2,3,4);
};