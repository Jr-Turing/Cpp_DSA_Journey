#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //create vector, declare
    vector<int>v;

    // size and capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(10); 
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl; 

    // Update value
    v[1] = 5;
};