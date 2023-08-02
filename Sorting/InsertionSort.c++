#include<bits/stdc++.h>   //optimal approach
using namespace std;
int main()
{
   int arr[] = {9,14,3,2,43,11,58,22};
   //{6,5,4,7,1,2};
   //{5,3,4,1,2};   
    int n=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i< n-1;i++)
    {
        for(int j=i+1; j> 0;j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
              
            }
            else
            {
                break;
            }
            
        }
    }
    for(int ele: arr)
    {
          cout << ele << endl;
    }
    return 0;
}
//Using while loop 

