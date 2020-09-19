class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        //unordered_map<char,int> index;
        int index[255]={0};
        for(int i=0;i<s.length();i++){
            index[s[i]]++;
            index[t[i]]--;
        }
        for(auto it:index)
            if(it!=0)//it.second!=0
                return false;
        return true;
    }
};
