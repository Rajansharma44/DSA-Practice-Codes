class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {            //leet code solution
       vector<int> result;
    //    if(nums == 0 )
    //    {
    //        return;
    //    }
       int sum=0;
       for(int num: nums)
       {
           sum+=num;
           result.push_back(sum);
       }
       return result;




    }
        
};
