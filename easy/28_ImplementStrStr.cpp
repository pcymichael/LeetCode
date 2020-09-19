class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        else if(needle.size()>haystack.size())
            return -1;
        int count=0;
        //haystack.length()-needle.length()
        //´î±¼needle.length()¥i¥H±q1608m -> 8m(4m)
        for(int i=0;i<=(haystack.length()-needle.length());i++){
            for(int j=0;j<needle.length();j++)
                if(haystack[i+j]==needle[j])
                    count++;
                else
                    break;
            if(count==needle.length())
                return i;
            else
                count=0;
        }
        return -1;
    }
};
