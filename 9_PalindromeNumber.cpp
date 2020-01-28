class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int sum=0,temp=x;
        while(temp!=0){
            if(sum>INT_MAX/10)
                return false;
            sum=sum*10+temp%10;
            temp/=10;
        }
        if(sum==x)
            return true;
        else
            return false;
    }
};
