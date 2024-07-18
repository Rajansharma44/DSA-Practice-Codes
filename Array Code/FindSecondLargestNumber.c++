#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,3,4,1,2,5,6};
    int n=7;
    int largest= INT_MIN;
    int sl=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
        {
            sl =largest;
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i]> sl)
        {
            sl=arr[i];
        }
    }
    cout << sl << endl;
    return 0;
}
