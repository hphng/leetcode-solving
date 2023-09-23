class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> a(300);
        int row = 0;
        for(auto i : nums){
            a[i]++;
            row = max(row, a[i]);
        }

        vector<vector<int>> ans;
        ans.resize(row);
        for(int i  =0 ; i < row; i++){
            for(int j = 0; j < a.size(); j++){
                if(a[j] != 0){
                    ans[i].push_back(j);
                    a[j]--;
                }
            }
        }

        return ans;

    }
};