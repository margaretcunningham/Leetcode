class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        vector<int> v;
        while (x > 0) {
            v.push_back(x % 10);
            x = x / 10;
        }
        int a = v.size()-1;
        for (int i = 0; i <= v.size()/2; i++) {
            if (v[i] != v[a]) {
                return false;
            }
            a--;
        }
        return true;
    }
};
