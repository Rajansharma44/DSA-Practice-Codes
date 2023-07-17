#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtNode(Node *&head, int data)
{
    Node *node1 = new Node(data);
    if (head == NULL)
    {
        head = node1;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node1;
}
void createCycle(Node* &head,int a,int b)
{
    int cnt1 = 0;
    int cnt2 = 0;
    Node* p1 = head;
    Node* p2 = head;

    while(cnt1 != a || cnt2 != b)
    {
        if(cnt1 != a)
        {
            p1 = p1 -> next;
            cnt1++;
        }

        if(cnt2 != b)
        {
            p2 = p2 -> next;
            cnt2++;
        }
    }

    p2 -> next = p1;
}
void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast -> next != NULL && fast -> next -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(fast == slow)
        {
            break;
        }
    }

    slow = head;
    while(slow -> next != fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next;
    }

    fast -> next = NULL;
}
    
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    insertAtNode(head,5);
   insertAtNode(head,10);
   insertAtNode(head,15);
    insertAtNode(head,2);

    createCycle(head,1,3);

  removeCycle(head);
    print(head);
    return 0;
}