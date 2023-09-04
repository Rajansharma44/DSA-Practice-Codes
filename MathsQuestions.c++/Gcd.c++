#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=36;                    // 36= 1,2,3,4,6,9,12,18,36                         
    int b=24;                     // 24=1,2,3,4,6,12,24          Greater common is 12 so answer is 12
    int gcd=0;
    for(int i=min(a,b);i>=1;i--)
    {
      if(a%i == 0 && b%i==0)
      {
        gcd=i;
        cout << "Gcd is => " << i << endl;
        break;
      }
    }
  
    return 0;
}
