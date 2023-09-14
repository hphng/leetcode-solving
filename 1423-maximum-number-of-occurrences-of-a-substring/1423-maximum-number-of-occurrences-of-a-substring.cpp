class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int ans = 0, result = 0;
        unordered_map<string, int> a;

        int check = 0, start = 0;

        for(int i = 0; i < s.length()-minSize + 1; i++){
            unordered_map<char, int> count;
            for(int j = i; j < i + minSize; j++){
                count[s[j]]++;
            }

            // for(auto t : count){
            //     cout << t.first << " " << t.second << endl;
            // }
            // cout << endl;

            if(count.size() <= maxLetters){
                string x = s.substr(i, minSize);
                //cout << x << endl;
                a[x]++;
                result = max(result, a[x]);
            }
        }

        return result;
        
    }
};