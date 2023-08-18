#include<bits/stdc++.h>
using namespace std;
int isfact(int n)
{
     if(n == 1)
     {
        return 1;
     }
     return   isfact(n-1) * n;             //This is the formula of finding the factorial
}
int main()
{
    int res= isfact(5);
    cout <<" Factorial is => " << res << endl;
    return 0;
}
