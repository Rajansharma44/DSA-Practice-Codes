#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {40, 25, 19, 12, 9, 6, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    for( int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > 2 * arr[j])
            {
                cnt++;
            }
        }
       
    }
     cout << cnt << endl;
    return 0;
}
