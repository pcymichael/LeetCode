class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int i=1;i<=nums.size();i++)
            x=x^i^nums[i-1];
        return x;
    }
};
//0 1 2 3
//(1+4)*4/2=10
