#include<bits/stdc++.h>
using namespace std;
int func(int a,int b) 
{
    // int maxV = (a > b) ? a : b;
    // int minV=(a < b) ? a: b;
    
    while(b !=0)
    {
      int  rem= a % b; 
       a=b; 
       b=rem;
    }
    return a;
}
int LcmFun(int a, int b)
{
    return (a * b)/ func(a,b);
}
int main()
{
    int a=15;
    int b=9;
    cout <<func(a,b) << endl;
    cout << LcmFun(a,b) <<  endl;
    return 0;
}
