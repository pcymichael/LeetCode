class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<bool> index(n,1);
        index[0]=false;index[1]=false;
        for(int i=2;i<=sqrt(n);i++)
            if(index[i])
                for(int j=i*i;j<=n;j+=i)
                    index[j]=false;       
        return accumulate(index.begin(),index.end(),0);
    }
};
//以空間換時間
//2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
// , ,4, ,6, ,8, ,10,  ,12,  ,14,  ,16,  ,18,  ,20
// , , , , , , ,9,  ,  ,12,  ,  ,15,  ,  ,18,  ,  
