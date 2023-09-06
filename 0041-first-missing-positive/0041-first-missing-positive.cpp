class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxInt = nums.size() + 1;
        for (int i = 0; i != nums.size(); ++i) {
            if (nums[i] > maxInt || nums[i] < 1) {
                nums[i] = maxInt;
            }
        }
        for (int i = 0; i != nums.size(); ++i) {
            if (nums[i] == i + 1) {
                continue;
            }
            if (nums[i] == maxInt) {
                continue;
            }
            while (nums[i] != i + 1 && nums[i] != maxInt) {
                if (nums[i] == nums[nums[i] - 1]) {
                    nums[i] = maxInt;
                    break;
                }
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i != nums.size(); ++i) {
            if (nums[i] == maxInt) {
                return i + 1;
            }
        }
        return maxInt;
    }
};