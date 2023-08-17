class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            bool foundDuplicate = false;
            
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && nums[i] == nums[j]) {
                    foundDuplicate = true;
                    break;                                    //Input: nums = [4,1,2,1,2]
                                                              //Output: 4
                }
            }
            
            if (!foundDuplicate) {
                return nums[i];
            }
        }
        
        // If no single number found, return a default value or handle the case accordingly.
        return -1; // For example, -1 indicates no single number found.
    }
};
