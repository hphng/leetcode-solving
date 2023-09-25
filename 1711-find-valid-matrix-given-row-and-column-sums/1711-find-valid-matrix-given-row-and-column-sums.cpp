class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        int a;

        vector<vector<int>> ans(m, vector<int>(n, 0));
        int i = 0, j = 0;
        while(i < m && j < n){
            a = ans[i][j] = min(rowSum[i], colSum[j]);
            if((rowSum[i] -= a) == 0) ++i;
            if((colSum[j] -= a) == 0) ++j;
        }

        return ans;
    }
};