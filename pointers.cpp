#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=5;
     int *p = &x; // here we make a pointer variable x which storing the value x in it   and & is used for taking the reference of x 
    
     cout<< &x << endl;  // And also after using & operator we can get output as memory address in c++ where c++ store the value of x

     cout << p << endl;      // Here also we get memory address of p as output 
    cout << &p << endl;
     
     *p=7;
      cout << p << endl;   // After asing the value to *p we tryign to print p but we get  output value as memory address 
     cout << *p << endl;   // But here we get real value which we provide 

     int **p_x= &p; // by using two pointer variable p and x  not both can conatain memory address of &p  p and x are not two varialble they are one p_x which contain memory address of p .
            // memory address of &p = 0x7ffe83906588 
     cout  << " first =>  " << p  << endl;
     cout  << " second  =>  " << &p  << endl;
     cout << " x => " << x << endl;
     cout << " Both p and x => " << p_x << endl;
     cout <<  " &x => " << &x << endl;

        return 0;
}
