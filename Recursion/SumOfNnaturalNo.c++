#include<bits/stdc++.h>
using namespace std;
int  Sum_of_naturalNumber(int n)
{
    if( n==0)
    {
        return 0;
    }

      return Sum_of_naturalNumber(n-1) + n;
      
}
int main()
{
   int result = Sum_of_naturalNumber(5);
    cout << "Sum of natural numbers: " << result << endl;
    return 0;
   
}
