class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res;
        for(int i=0;i<nums.size();i++){
            // count() -> key 出現的次數
            if(res.count(target-nums[i])==1)
                return {res[target-nums[i]], i};
            res[nums[i]] = i;
        }
        return {};
    }
};