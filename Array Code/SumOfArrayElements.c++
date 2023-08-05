#include<bits/stdc++.h>
using namespace std;       //optimal  approach 
int main()
{
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    } 
    cout << " sum of array is => " << sum << endl;
    return sum;
    
}
// Geeks for geeks approach
int sumElement(int arr[],int n)
{
    //Your code here
    
       int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       
   }
      return sum;
  
}

