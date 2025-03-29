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


// 

#include<bits/stdc++.h>
using namespace std;
 int main()
 {                               // User Input  Sorting 
    
    int n;
    cin >> n;
    int arr[n];

    

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j> 0 ; j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    cout << "Sorted Array is : ";
     for(int i=0;i<n;i++)
     {
        cout << arr[i] << " ";
     }

 }


#include<bits/stdc++.h>                                //without swapping 
using namespace std;
void insertEle(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int key= arr[i];
        int j= i - 1;
        while( j >= 0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}
void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[]={ 12, 11, 13, 5, 6};
    int size= sizeof(arr) / sizeof(arr[0]);
    insertEle(arr,size);
    cout << "Sorted array is :  \n" ;
    printArr(arr,size);
    return 0;
}
