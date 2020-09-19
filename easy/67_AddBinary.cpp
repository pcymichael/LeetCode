class Solution {
public:
    string addBinary(string a, string b) {
        int aLen=a.length()-1, bLen=b.length()-1, count=0;
        string str="";
        for(int i=max(aLen, bLen);i>=0;i--){
            int total=count;
            if(aLen>-1)
                total+=(a[aLen--]-48);
            if(bLen>-1)
                total+=(b[bLen--]-48);
            str+=((total&1)+48);
            count=total/2;
        }
        if(count)
            str+=(count+48);
        reverse(str.begin(),str.end());
        return str;
    }
};
