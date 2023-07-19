#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast= head;
        ListNode* prev =NULL;
         while(fast !=NULL && fast ->  next )
         {                                                              //Leet code solution 
             prev =slow;
             slow = slow -> next;
             fast= fast -> next -> next;
         }
     
       // prev -> next = slow -> next;
           if (prev) {
            prev->next = slow->next;
            delete slow;
        } else {
            // If 'prev' is NULL, it means there is only one node in the list (head node is the middle node)
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
           return head;
    }
    
};

//Normal  manual appraoch
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node( int val)
    {
        data=val;
        next= NULL;
    }
};
int InsertAtNode(Node* &head, int data)
{
    Node* temp = new Node(data);
    int cnt=0;
    while(temp!=NULL)
    {
      temp = temp -> next;
      cnt++;
    }
    
    return cnt;
}
void insertAtHead(Node* &head,int data)
{
    Node* temp = new Node(data);
    temp -> next=head;
    head= temp;
}
void DeleteMiddleNode(Node* &head)
{

    Node* slow= head;
    Node* fast= head;
    Node* prev = NULL;
    while(fast != NULL && fast -> next &&  fast -> next -> next)
    {
        prev= slow;
        slow = slow -> next;
        fast= fast -> next -> next;    
    }
     cout << "Slow data -> " <<  slow -> data << endl;
    prev->next = slow->next ;
   
    delete slow;    
}

void print(Node* &head)
{
    Node* temp = head;
    while( temp != NULL)
    {
       cout << temp -> data << " ";
       temp = temp -> next;
    }
    cout << endl;
}
 int main()
 {
    Node* node1= new Node(25);
    Node* head= node1;
  
   
    insertAtHead(head,20);
     insertAtHead(head,15);
     insertAtHead(head,10);
    insertAtHead(head,5);
   
    print(head);
    DeleteMiddleNode(head);
    print(head);

    return 0;
 }
