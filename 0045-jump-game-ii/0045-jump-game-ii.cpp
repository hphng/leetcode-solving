class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), 100000);
        dp[0] = 0;
        if(nums.size() == 1)
            return 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i+1; j <= i + nums[i]; j++)
            {
                if(j >= nums.size())
                    break;
                dp[j] = min(dp[j], dp[i] + 1);
            }
        }
        return dp[nums.size()-1];
    }
};