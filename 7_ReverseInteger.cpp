class Solution {
public:
    int reverse(int x) {
        int result=0;
        //cout<<INT_MAX;
        //cout<<INT_MIN;
        while(x!=0){
            //-2147483648~2147483647
            if (result > INT_MAX / 10 || result < INT_MIN / 10) {
				return 0;
			}
            result=result*10+(x%10);
            x/=10;
        }
        return result;
    }
};
