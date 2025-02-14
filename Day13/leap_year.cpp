//Q0) for an input year N, find whether the year is a leap or not.
class Solution{
public:
    int isleap(int N)
    {
        if(N%400==0)
        return 1;
        else if(N%4==0 && N%100!=0)
        return 1;
        else 
        return 0;
    }
};