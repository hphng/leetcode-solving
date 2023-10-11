class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int prev = -100000;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i +1;
            int k = nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if( abs(target - sum) < abs(target - prev))
                {
                    prev = sum;
                }

                if(sum < target)
                {
                    j++;
                }
                else if(sum > target)
                {
                    k--;
                }
                else{
                    return sum;
                }
            }
        }

        return prev;
    }
};