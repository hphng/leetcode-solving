class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hash;

        for(auto i : s){
            hash[i]++;
        }

        for( auto i: t){
            if(hash.find(i) == hash.end())
                return i;
            hash[i]--;
            if(hash[i] == 0){
                hash.erase(i);
            }
        }

        return t[t.length()-1];
    }
};