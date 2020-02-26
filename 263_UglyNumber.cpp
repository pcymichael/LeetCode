class Solution {
public:
    bool isUgly(int num) {
        if(num==0)
            return false;
        int n[3]={2,3,5};
        for(int i=0;i<3;i++)
            while(num%n[i]==0)
                num/=n[i];
        return num==1;
    }   
};
