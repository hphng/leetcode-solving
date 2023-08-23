class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxi = 1;
        vector<int> ans(nums.size(), 1);
        ans[0] = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                {
                    ans[i] = max (ans[j] +1, ans[i]);
                    maxi = max(maxi, ans[i]);
                }
            }
        }
        return maxi;
    }
};