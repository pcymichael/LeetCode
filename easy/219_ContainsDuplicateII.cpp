class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> lookUp;
        for(int i=0;i<nums.size();i++){
            if(lookUp.count(nums[i]))
                if(i-lookUp[nums[i]]<=k)
                    return true;
            lookUp[nums[i]]=i;
        }
        return false;
    }
};
