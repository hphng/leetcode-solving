
    int countbit(int n){
        if(n == 0)
            return 0;
        return 1 + countbit(n & (n-1));
    }
    bool check(int x, int y){
        if(countbit(x) == countbit(y)){
            return x < y;
        }
        return countbit(x) < countbit(y);
    }

class Solution {
public:


    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), check);
        return arr;
    }
};