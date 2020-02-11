class Solution {
public:
	string countAndSay(int n) {
        string str="1";
		while(n>1){
            int count=1;
            string temp="";
            for(int i=0;i<str.length();i++){
                if((i+1)==str.length()||str[i]!=str[i+1]){
                    temp+=to_string(count)+str[i];
                    count=1;
                }else
                    count++;
            }
            str=temp;
            n--;
        }
        return str;
	}
};
