class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> remain;
        for (int i=0; i<nums.size(); i++){
            int complement=target-nums[i];
            if (remain.find(nums[i])!=remain.end())
                return {remain[nums[i]],i};
            remain[complement]=i;
        }  
        return {};
    }
};
