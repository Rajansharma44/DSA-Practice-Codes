#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mapvalue;
    mapvalue["Rajan"]= 98;
    mapvalue["aryman"]= 97;
    mapvalue["dheeraj"]= 77;
      mapvalue.insert({"pankaj ",10});
    map<string,int> :: iterator  itr;
    for( itr=mapvalue.begin();itr!=mapvalue.end();itr++)
    {
        cout << (*itr).first << (*itr).second << " " <<"\n ";
    }
    
  
    
    return 0;
}
