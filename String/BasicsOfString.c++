#include<bits/stdc++.h>
using namespace std;
int main()
{
  //reverse a string
//   string s="rajan";
  int size=0;
//   int st=0;
//   int end=s.size()-1;
//   while(st < end)
//   {
//       swap(s[st],s[end]);
//      st++;
//      end--;
//   }
//     cout << s;


//calculate the size of string without s.size()

// for(int i=0;i<s.size();i++)
// {
//   if(s != "\0")
//   {
//       size++;
//   }
// }
// cout << size;


//palindrome or not 
string s;
cin >> s;
int st=0;
int end=s.size()-1;
while(st < end)
{
    if(s[st] != s[end])
    {
        cout << "Not a palindrome"<< endl;
        return 0;
    }
    else
    {
        cout << " palindrome"<< " ";
        return 0;
    }
}

    return 0;
}
