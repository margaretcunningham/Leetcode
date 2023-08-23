class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        if (s.length() == 0) {
            return true;
        }
        for (int i = 0; i < t.length(); i++) {
            if (s[x] == t[i]) {
                x++;
                if (x == s.length()) {
                    return true;
                }
            }
        }
        return false;
    }
};
