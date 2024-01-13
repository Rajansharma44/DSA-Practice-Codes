#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n)
{
  if(n <=1)
  {
    return;
  }
  InsertionSort(arr,n-1);
  int last=n-1;
  int j=n-2;
  while(j>=0 && arr[j] > last)
  {
    swap(arr[j],arr[j+1]);
    j--;
  }
  arr[j+1]=last;
}
void printArray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
     cout <<arr[i] << " ";
   }
}
int main()
{
    int arr[]={5,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
