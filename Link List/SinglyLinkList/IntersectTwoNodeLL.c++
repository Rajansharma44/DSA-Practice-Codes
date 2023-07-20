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
void insertNode(Node* &head,int val){
    Node* node1 = new Node(val);
    if(head == NULL)
    {
        head = node1;
        return;
    }

    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = node1;
}

Node* findIntersection(Node* &head1,Node* &head2)
{
    unordered_set<Node*> s;
    while(head1!=NULL)
    {
        s.insert(head1);
        head1=head1-> next;
    }
    while(head2!=NULL)
    {
       if(s.find(head2)!=s.end())
       {
        return head2;
       }
       else{
        head2= head2 -> next;
       }
    }
    return NULL;
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
    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,4);
    Node* head1 = head;
    head = head -> next -> next -> next;
    Node* sec = NULL;
    insertNode(sec,3);
    Node* head2 = sec;
    sec -> next = head;

    print(head1);
    print(head2);

   // Node* ans = findIntersection(head1,head2);

  //  cout << ans -> data << endl;

    // T.C => O(N + M)
    // S.C => O(N)

    return 0;
}
