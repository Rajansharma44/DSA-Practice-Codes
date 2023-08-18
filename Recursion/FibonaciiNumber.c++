#include<bits/stdc++.h>
using namespace std;
int isFibonaci(int n)
{
    if(n==0 || n == 1)
    {
        return 1;
    }
    return isFibonaci(n-1) + (n-2);
}
int main()
{
    int res= isFibonaci(5);
    cout << "Fibonaci series is => " << res << endl;
    return 0;
}
