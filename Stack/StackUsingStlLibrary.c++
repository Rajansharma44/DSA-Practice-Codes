#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
      cout << s.size() << endl;
    s.pop();
    cout << s.top() << endl;
  
    
    return 0;
}
