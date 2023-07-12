#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[10];
   a[0]=2;
    a[1]=4;
    a[2]=6;
    cout <<a <<endl;  // this will give output as Memory address of a  like this =>  0x7ffd5e2f30a0
    cout <<&a << endl; // this also give same as above 

    cout << &a[0] << endl;
      cout << a[0] << endl;

      cout << a + 1 << endl; // So here memory address value of a is 0x7ffd892a1790 and adding +1  we get 0x7ffd892a1794 here we can see  the difference of 4 because size of int is 4 

      cout << " a[2] => " << &a[2] << endl;
    return 0;
}