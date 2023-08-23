class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        set<char> se;
        for (int i = 0; i < s.length(); i++) {
            if (m.count(s[i]) != 0) {
                if (m[s[i]] != t[i]) {
                    return false;
                }
            } else {
                m[s[i]] = t[i];
                if (se.count(t[i])!=0) {
                    return false;
                }
                se.insert(t[i]);
            }
        }
        return true;
    }
};
