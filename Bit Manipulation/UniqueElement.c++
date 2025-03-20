#include<bits/stdc++.h> // brute force method
using namespace std;
int main()
{
    int arr[]={2,3,4,2,3,6,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)
    {
       int count =0;
       for(int j=0;j<size;j++)
       {
           if( arr[i] == arr[j])
           {
               count++;
           }
       }
       if(count == 1)
       {
           cout << "Unique Element is : " <<arr[i] << endl;
           break;
       }
    }
