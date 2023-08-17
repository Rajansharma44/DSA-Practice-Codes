#include<bits/stdc++.h>
using namespace std;

void print_number(int n)                  //In this question we are priting number 10 to 1 using recursion
{
    if(n==0)
    {
        return;
    }
    cout << n << endl;
    print_number(n-1);
}
int main()
{
    print_number(10);
    return 0;
}
