class Solution {
public:
    bool isHappy(int n) {
        if(n==0) return false;
        set<int> st;
        while(1){
            string index=to_string(n);
            int sum=0;
            for(int i=0;i<index.length();i++)
                sum+=(index[i]-'0')*(index[i]-'0');
            if(sum==1)
                return true;
            else if(st.count(sum))
                return false;
            n=sum;
            st.insert(sum);
        }
    }
};
