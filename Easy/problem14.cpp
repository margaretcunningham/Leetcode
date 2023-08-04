class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int x = 0;
            string a = "";
            while (x < s.length() && x < strs[i].length()) {
                if (s[x] == strs[i][x]) {
                    a += s[x]; 
                } else {
                    break;
                }
                x++;
            }
            s = a;
        }
        return s;
    }
};
