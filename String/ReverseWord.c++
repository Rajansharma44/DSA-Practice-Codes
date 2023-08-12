#include<bits/stdc++.h>
using namespace std;

 string reverseWords(string str) {
     
     stringstream s(str);
    
        string word;

        vector<string>temp;
        string ans="";

        while(s>>word){
            temp.push_back(word);
        }
        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0)
            ans+=temp[i]+" ";
            else
                ans+=temp[i];

        }
        return ans;
    }

int main()
 {
    string s = "the sky is blue";
    string result= reverseWords(s);
    cout << result << endl;

  return 0;
 }
