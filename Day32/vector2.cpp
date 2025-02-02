#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Create 2d vector
    int n,m;
    cout<<"Enter rows and col: ";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,1));

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}