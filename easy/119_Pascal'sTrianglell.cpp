class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        res.resize(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            res[i].resize(i+1);
            res[i][0] = 1;
            res[i][i] = 1;
            for(int j=1;j<i;j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res[rowIndex];
    }
};

/* 一維作法
class Solution {
public:
	vector<int> getRow(int numRows) {
		vector<int> dp;
		dp.resize(numRows + 1);
		for (int i = 0; i <= numRows; i++) {
			dp[i] = 1;
			for (int j = i - 1; j > 0; j--)
				dp[j] = dp[j] + dp[j - 1];
		}
		return dp;
	}
};
*/