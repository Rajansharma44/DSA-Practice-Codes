class Solution {
public:
int sum=0;
    int sumOfUnique(vector<int>& nums) {             //Leet code Solution 
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            bool isUnique=true;
            for(int j=0;j<nums.size();j++)
            {
                if(i !=j && nums[i] == nums[j])
                {
                    isUnique = false;
                   break;
                }
            }
            if(isUnique)
            {
                sum+=nums[i];
            }
        }
        return sum;

    }
};
