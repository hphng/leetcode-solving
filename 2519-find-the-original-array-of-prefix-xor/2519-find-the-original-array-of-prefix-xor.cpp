class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int a = 0;
        for(int i = 0; i < pref.size(); i++){
            int k = pref[i];
            a = k ^ a;
            ans.push_back(a);
            if(i > 0)
                a = a ^ pref[i-1]; 
        }

        return ans;
    }
};