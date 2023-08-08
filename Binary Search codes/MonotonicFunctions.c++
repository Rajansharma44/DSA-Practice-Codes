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
