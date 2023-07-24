class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
     
                                               //same as like link list cycle problem  
                                            // And this is the link list code
       do{
           slow=nums[slow];
           fast=nums[nums[fast]];
       }while(slow!=fast);
       fast=nums[0];
       while(slow!=fast)
       {
           slow=nums[slow];
           fast=nums[fast];
       }
       return slow;


       }
        

};
