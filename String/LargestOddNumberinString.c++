#include<bits/stdc++.h>            
using namespace std;

string maxodd( string s)
{
  for(int i=s.length()-1;i >=0;i--)
  {
    if(s[i] % 2 !=0)
    {
        string s1=s.substr(0,3);
        return s1;
    }
  }
  return " ";
}


int main()
{
   string num = "4236";
    string s=  maxodd(num);
    cout << s;
    return 0;
}                                             //Leet code solution 



class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--)
        {
            if(num[i] % 2 !=0)
            {
                string s1= num.substr(0,i+1);
                return s1;
            }
        }
        return "";
        
    }
};

