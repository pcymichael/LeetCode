class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0, b=0;
        vector<int> S(10, 0);
        vector<int> G(10, 0);
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i])
                a++;
            else{
                S[secret[i]-'0']++;
                G[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++)
            b+=min(S[i], G[i]);
        return (to_string(a)+"A"+to_string(b)+"B");
    }
};