#include<iostream>
using namespace std;

int main()
{
    // small (s) swap is inbuild function in c++ 
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1 = 4.8, f2 = 3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}