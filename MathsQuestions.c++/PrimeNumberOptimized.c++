#include<bits/stdc++.h>   //Time complexity 0(log n)
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPrime= true;
    if(n <= 1)
    {
        isPrime=false;
    }
    else{
        for(int i=2;i*i <= n; i++)
        {
           if(n % i == 0)
           {
             isPrime=false;
             break;
           }
        }
    }
    if(isPrime)
    {
        cout<< "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
    return 0;
}
