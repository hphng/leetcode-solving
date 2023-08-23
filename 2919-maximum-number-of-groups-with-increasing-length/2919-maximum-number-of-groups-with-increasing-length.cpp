class Solution {
public:
    int maxIncreasingGroups(vector<int>& usageLimits) {
        sort(usageLimits.begin(), usageLimits.end());

        long long nums = 0, ans = 0;
        for(int i = 0; i < usageLimits.size(); i++){
            nums += usageLimits[i];

            if(nums >= (ans+1)* (ans+2)/2){
                ans++;
            }
        } 

        return ans;
    }
};