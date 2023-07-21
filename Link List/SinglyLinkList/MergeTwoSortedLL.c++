class Solution {
public:
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
        ListNode* dummy =new ListNode();
        ListNode* temp = dummy;
        if(List1 == NULL)
        {
            return List2;
        }
        if(List2 == NULL)
        {
            return List1;
        }
          if( List1 -> val >  List2 -> val)                         //Leetcode solution 
            {
                swap(List1,List2);
            }
            ListNode* res= List1;
            while(List1 !=NULL && List2 != NULL)
            {
                ListNode* temp =NULL;
                while(List1!=NULL && List1 -> val <= List2 -> val)
                {
                    temp =List1;
                    List1=List1 -> next;
                }
                temp -> next = List2;
                swap(List1,List2);
            }
    return res;
        
    }
};
