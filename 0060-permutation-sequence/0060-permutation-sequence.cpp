class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        vector<char> num;
        int factor = 1;
        for(int i = 1; i <=n; i++)
        {
            factor*=i;
            char x = i + '0';
            num.push_back(x);
        }


        int bfactor = factor;
        for(int i  = n; i >1; i--)
        {
            bfactor/=i;
            if(k > bfactor)
            {
                int x = ceil( (double)k / bfactor);
                ans.push_back(num[x-1]);
                num.erase(num.begin() + x - 1);
                k = k - (k / bfactor)*bfactor;
                if (k == 0)
                    k+=bfactor;
            }
            else
            {

                ans.push_back(num[0]);
                num.erase(num.begin());
            } 
        }

        ans.push_back(num[0]);
        return ans;
    }
};