#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
    int arr[]={5,1,3,4,2};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);                 //o(n^2) time Complexity
            }
            else{
                break;
            }
        }
    }
    cout << "Sorted Array" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
 }
