#include <iostream>
using namespace std;

void printsumdig(int matrix[][3], int row, int col)
{
    int first = 0;
    int sec = 0;

    // first diagonal sum
    int i = 0;
    while(i<row)
    {
        first += matrix[i][i];
        i++;
    }

    // second diagonal sum
    i = 0;
    int j = col-1;
    while (j>=0)
    {
        sec += matrix[i][j];
        i++, j--;
    }

    cout<<first<<" "<<sec<<" ";
}

int main() 
{
    // create 2d array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    // Print diagonal sum
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printsumdig(matrix, 3, 3);
};