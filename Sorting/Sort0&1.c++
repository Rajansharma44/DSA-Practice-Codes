#include<bits/stdc++.h>                   //  Brute force approach 
using namespace std;
int main()
{
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    return 0;
}
 
                                                  //  2nd approach  using two pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i< n;i++)
    {
        if(arr[i]==0)
        {
            cnt0++;
        }
        else if(arr[i]==1)
        {
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
        for(int i=0;i<cnt0;i++)
        {
            arr[i]=0;
        }
        for(int i=cnt0; i< cnt0 + cnt1;i++)
        {
          arr[i]=1;
        }
     for(int i = cnt0 + cnt1; i<n ;i++)
       {
        arr[i]=2;
       }
       for(int e : arr)
       {
        cout << e << " ";
       }
       
    
    return 0;
    
}


                                                           // 3 approach using 3 pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   int start=0;
   int mid=0;
   int end=n-1;
   
   for(int i=0;i<n;i++)
   {
    if(arr[mid]==0)
    {                                                             //output : 0 0 0 0 0 1 1 1 1 2 2 2
        swap(arr[mid],arr[start]);
        mid++;
        start++;
    }
    else if(arr[mid] == 2 )
    {
        swap(arr[mid],arr[end]);
  end -- ;
    }
    else{
        mid++;
    }
   }
    for( int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    
    return 0;

}

                                                            //Leetcode solution 
class Solution {
public:
    void sortColors(vector<int>& nums) {                 //with best solution beats 100% user 
    int index=0;
    int zero=0,one=0,two=0;
    for(int i=0;i<size(nums);i++)
    { if(nums[i]==0)zero++;
      if(nums[i]==1)one++;
      if(nums[i]==2)two++;
        }
        while(zero!=0)
        {
          nums[index++]=0;
          zero--;
        }
        while(one!=0)
        {
          nums[index++]=1;
          one--;
        }
        while(two!=0)
        {
          nums[index++]=2;
          two--;
        }

    }
};

