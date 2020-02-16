class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int index_max=nums[0], sum=0;
        for(int i=0;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            index_max=max(index_max, sum);
        }
        return index_max;
    }
};
//-2, 1, -3, 4, -1, 2, 1, -5, 4
//-2, 1, -2, 4,  3, 5, 6,  1, 4
