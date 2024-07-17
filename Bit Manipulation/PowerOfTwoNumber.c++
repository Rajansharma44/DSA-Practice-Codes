//recursive solution for finding power of anything a^b

// #include<bits/stdc++.h>
// using namespace std;
//  int recur( int a,int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     if(b & 1)
//     {
//         return a*recur(a,b/2)*recur(a,b/2);
//     }
//     else
//     {
//         return recur(a,b/2)*recur(a,b/2);
//     }
// }
// int main()
// {
//     int result=recur(2,10);
//     cout << result << endl;
//     return 0;
// }



// //Iterative solution  time complexity= log(b)
// #include<bits/stdc++.h>
// using namespace std;
// int iter(int a,int b)
// {
//     int ans=1;
//     while(b!=0)
//     {
//         if(b & 1)
//         {
//           ans=ans * a;
//         }
//         a= a*a;
//       b= b >> 1;
//     }
//     return ans;
// }
// int main()
// {
//     int result=iter(2,13);
//     cout << "Power of 2^13 is :" << result << endl;
//     return 0;
// }


//more optimized solution  // log(b)
#include<bits/stdc++.h>
using namespace std;
int iter2(int a,int b)
{
    int ans=1;
    while(b!=0)
    {
         if(b & 1)
    {
        ans=ans*a;
        b=b-1;
    }
    else
    {
        a=a*a;
        b=b/2;
    }
    }
   return ans;
}
int main()
{
    int result = iter2(2,13);
    cout << result << endl;
    return 0;
}
