class Solution {
public:
    int minimumBoxes(int n) {
        int maxlayer = 10000;
        int ans = 0;
        for(int i = 0; i < maxlayer; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(n <= 0)
                    break;
                ans++;
                n= n -j;
            }
            if(n <= 0)
                break;
        }
        return ans;
    }
};  