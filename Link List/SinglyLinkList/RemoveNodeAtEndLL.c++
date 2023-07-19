#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node1= new ListNode(0);
    
        ListNode* slow= node1;
        ListNode* fast= node1;
       node1 -> next= head;
         for( int i=0;i<=n;i++)
         {
             fast = fast -> next;                                                  //Leet code solution 
         }
        while(fast != NULL )
        {
           
            slow = slow -> next;
              fast = fast -> next ;
        }
        ListNode* tobedelete = slow -> next;
        slow -> next = slow -> next -> next;
        delete tobedelete;
      // prev -> next = slow -> next;
          return node1 -> next;
    }
  
};
