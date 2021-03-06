class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> s;
        for(int i:nums1)
            s.insert(i);
        for(int i=0;i<nums2.size();i++){
            if(s.count(nums2[i])){
                res.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return res;
    }
};