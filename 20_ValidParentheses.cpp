class Solution {
public:
    bool isValid(string s) {
        stack<char> index;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                index.push(s[i]);
            else if(index.empty())
                return false;
            else{
                if(s[i]==')'&&index.top()!='(')
                    return false;
                if(s[i]=='}'&&index.top()!='{')
                    return false;
                if(s[i]==']'&&index.top()!='[')
                    return false;
                index.pop();
            }
        }
        return index.empty();
    }
};
