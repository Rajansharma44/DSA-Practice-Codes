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
