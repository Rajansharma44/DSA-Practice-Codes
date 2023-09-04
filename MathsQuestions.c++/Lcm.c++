#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=36;
    int b=24;
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
    int lcm= (a*b)/gcd;                           // 36= 1,2,3,4,6,9,12,18,36                         
                                                 // 24=1,2,3,4,6,12,24            so here  2^3 *  3^2  is the highest so we calculate highest number 
    cout << "Lcm is => "<<lcm ;                         // Answer is 72
    
    return 0;
}
