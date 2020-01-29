class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = { {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1} };
        int sum=mp[s[s.length()-1]];
        for(int i=0;i<s.length()-1;i++){
            //cout<<sum<<endl;
            if(mp[s[i]]<mp[s[i+1]])
                sum-=mp[s[i]];
            else
                sum+=mp[s[i]];
        }
        //cout<<sum;
        return sum;
    }
};
