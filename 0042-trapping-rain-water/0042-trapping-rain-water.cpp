class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0, size = height.size();
        int left[size], right[size];
        left[0] = height[0];
        for(int i = 1; i< size; i++)
            left[i] = max(height[i], left[i-1]);
        right[size-1] = height[size-1];
        for(int i = size-2; i >=0; i--)
            right[i] = max(height[i], right[i+1]);
        for(int i =0 ; i < size; i++)
            sum+= min(left[i], right[i]) -height[i];
        return sum;
    }
};