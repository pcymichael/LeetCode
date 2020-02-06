class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int dp1=0,dp2=nums[0];
        for(int i=1;i<nums.size();i++){
            int dp=dp1;
            dp1=dp2;
            dp2=max(dp+nums[i],dp1);
        }
        return dp2;
    }
};
//index[-1]=0
//[2,1,9,11,1]
//index[0]=nums[0]=2
//index[1]=max(index[-1]+nums[1],index[0])=2
//index[2]=max(index[0]+nums[2],index[1])=11
//index[3]=max(index[1]+nums[3],index[2])=13
//index[4]=max(index[2]+nums[4],index[3])=13
