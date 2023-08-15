#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int start;
    int end;
    int curr;
    
    int* arr;
    public:
    Queue()
    {
         arr=new int[5];
        start=-1;
        end=-1;
        curr=0;
     
       
    }

void push(int ele)
{
    if(curr == 5)
    {
        cout << "queue is full" << endl;
        exit(1);
    }

    if(end == -1)
    {
        start=0;
        end=0;
    }
    else{
        end=(end+1)%5;
    }
      arr[end]=ele;
    curr++;
  

}
int pop()
{
    if(start == -1)
    {
        cout << "Queue is empty " << endl;
    }
    int x= arr[start];
    if(curr == 1)
    {
       start=-1;
       end=-1;
    }
    else{
        start=(start + 1) % 5;
    }
    curr--;
    return x;
}
int top()
{
    if(start == -1)
    {
        cout << "Empty" << endl;
        exit(1);
    }
    return arr[start];
}
int size()
{
    return curr;
}
};

int main()
{
    Queue q;
    q.push(1);
     q.push(2);
      q.push(3);
       q.push(4);
       cout << q.size() << endl;
         cout << q.top() << endl;
         q.pop();
           cout << q.size() << endl;
         cout << q.top() << endl;

    return 0;
}
