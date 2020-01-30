class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        else if(strs.size()==1)
            return strs[0];
        
        string index="";
        for(int i=0;i<strs[0].length();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i])
                    return index;
            }
            index+=strs[0][i];
        }       
        return index;
    }
};
