#include<bits/stdc++.h>
using namespace std;                  //Using array  Lifo  Stack
class Stack
{
    int top;
    int size;
    int* arr;
    public:
    Stack()
    {
        top=-1;
        size=5;
        arr=new int[size];
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
       int x=arr[top];
       top--;
       return x; 
    }
    int top1()
    {
        return arr[top];
    }
    int size1()
    {
        return top + 1;
    }
};



int main()
{
    Stack s;
    s.push(1);
     s.push(2);
      s.push(3);
      cout << s.size1() << endl;
      s.pop();
      cout << s.size1() << endl;
      cout << s.top1() << endl;
    return 0;
}
