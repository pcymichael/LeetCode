class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> s_map,t_map;
        for(int i=0;i<s.length();i++){
            if(s_map.count(s[i])){
                if(s_map[s[i]]!=t[i])
                    return false;
            }else if(t_map.count(t[i])){
                if(t_map[t[i]]!=s[i])
                    return false;
            }else{
                s_map[s[i]]=t[i];
                t_map[t[i]]=s[i];
            }
        }
        return true;
    }
};
