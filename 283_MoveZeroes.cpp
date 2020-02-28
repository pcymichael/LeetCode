class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,i=-1;
        while(++i!=nums.size())
            if(nums[i]!=0)
                swap(nums[i],nums[left++]);
    }
};
//  0   3   0   0   1   12
//  Li

//  L   i
//  3   0   0   0   1   12
