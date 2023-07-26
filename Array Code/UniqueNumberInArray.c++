 //Brute force aaproach
 
 #include<bits/stdc++.h>
using namespace std;
int main()
{                                        //time complexity o(n^2)
    int arr[]={1,2,3,4,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j] == num)
            {
                cnt++;
            }
        }
            if(cnt == 1)
            {
                cout << num <<endl;
                break;
            }
  
        }
                 return 0;
    }


//optimized code with time complexity o(n)  
     
 #include<bits/stdc++.h>
 using namespace std;
  int main()
  {
     int arr[]={ 1, 2,3,4,1,2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int unique_num = 0;
    for( int i=0;i< n ; i++)
    {
        unique_num^=arr[i]     ;
    }
            cout<<"Unique no. in array is " <<  unique_num << endl;
return 0;

  }
