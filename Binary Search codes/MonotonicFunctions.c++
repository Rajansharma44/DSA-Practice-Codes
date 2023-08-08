class Solution {
public:                                                 //leet code solutions
    bool isMonotonic(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int after = start + 1;

        bool increasing = true; // Initialize as true
        bool decreasing = true; // Initialize as true

        while (after <= end) {
            if (nums[start] < nums[after]) {
                decreasing = false; // If we find an increasing element, not decreasing
            } else if (nums[start] > nums[after]) {
                increasing = false; // If we find a decreasing element, not increasing
            }
            
        
            start++;
            after++;
           
        }

        return increasing || decreasing; 
    }
};
                                                        Example 1:

Input: nums = [1,2,2,3]
Output: true
Example 2:

Input: nums = [6,5,4,4]
Output: true                                     these are the test cases for this questions
Example 3:

Input: nums = [1,3,2]
Output: false
