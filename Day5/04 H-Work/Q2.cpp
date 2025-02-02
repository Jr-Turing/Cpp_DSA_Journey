/*
    Q2.	Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
*/
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>18)
    {
        cout<<"His/Her is Adult";
    }
    else
    {
        cout<<"His/Her is Teenager";
    }
    return 0;
}