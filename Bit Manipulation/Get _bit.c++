#include<bits/stdc++.h>
using namespace std;
int GetManipulation(int n,int pos)
{
    return (n & (1 <<pos)) !=0;      
}
 int main()
 {
    cout << GetManipulation(5,2) << endl;
    return 0;        
 }
