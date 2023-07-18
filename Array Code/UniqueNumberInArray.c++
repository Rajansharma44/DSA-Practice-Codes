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
