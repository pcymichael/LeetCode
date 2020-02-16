class Solution {
public:
	int lengthOfLastWord(string s) {
        int count=0, len=s.length()-1;
        while(s[len]==' '&&len>=0) len--;
	    for(int i=len;i>=0;i--)
            if(s[i]!=' ')
                count++;
            else
                break;
        return count;
	}
};
