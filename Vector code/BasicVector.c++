#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector < int > v;
    v.push_back(1);              //vector solution 
    v.push_back(2);
     v.push_back(3);
      v.push_back(4);
      for(int i=0;i< v.size();i++)
      {
       cout << v[i] ;
      }
      cout << endl;
      v.pop_back();
      v.pop_back();
      for(int i=0;i<v.size();i++)
      {
        cout << v[i] << endl;
      }
    
    
    return 0;
}
