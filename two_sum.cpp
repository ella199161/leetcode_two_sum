class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        vector<int> res;
        
        for(i=0;i<nums.size();i++)
        {
            for (j=i+1;j<nums.size();j++)
            {
            if (nums[i]+nums[j]== target)
            {
                res.push_back(i);
                res.push_back(j);
                return res;
            }   
            }
        }
            
        
        return res;
        
        
    }
};
