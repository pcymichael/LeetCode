class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0) return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                return true;
        return false;
    }
};
/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> index;
        for(int i=0;i<nums.size();i++){
            if(index[nums[i]])
                return true;
            index[nums[i]]=true;
        }
        return false;
    }
};
*/
