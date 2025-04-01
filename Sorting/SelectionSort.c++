#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,11,33,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++)
    {
        int minEle= i;
        for(int j=i+1;j<size;j++)
        {
           if(arr[j] < arr[minEle])
           {
            minEle = j;
           }
        }
        swap(arr[i],arr[minEle]);
    }
    
    for(int num: arr)
    {
        cout << num << " ";
    }
   cout << endl;

   return 0;
}
