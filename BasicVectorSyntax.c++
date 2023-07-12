#include<bits/stdc++.h>
using namespace std;
 int main()
 { 
    int x;
    cin >> x;
    vector < int> v[x];
    for ( int i=0;i< x ;i++)
    {
     int n; 
     cin >> n;
     for ( int j =0 ; j < n ; j++)
     {
        int k ;
        cin >> k;
        
         v[i].push_back(k);
     }
    }

    return 0; 
 }






























