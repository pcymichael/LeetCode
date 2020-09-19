class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(m>0&&n>0)
            if(nums2[n-1]>nums1[m-1]){
                nums1[n+m-1]=nums2[n-1];
                n--;
            }else{
                nums1[n+m-1]=nums1[m-1];
                m--;
            }
        for(int i=0;i<n;i++)
            nums1[i]=nums2[i];
    }
};