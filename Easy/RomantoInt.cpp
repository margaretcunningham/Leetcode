class Solution {
public:
    int romanToInt(string s) {
        int out = 0;
        map<char,int> roman;
        roman.insert(make_pair('I', 1));
        roman.insert(make_pair('V', 5));
        roman.insert(make_pair('X', 10));
        roman.insert(make_pair('L', 50));
        roman.insert(make_pair('C', 100));
        roman.insert(make_pair('D', 500));
        roman.insert(make_pair('M', 1000));
        out += roman[s[0]];
        for (int i = 1; i < s.length(); i++) {
            
            if (s[i] == 'V' || s[i] == 'X') {
                if (s[i-1] == 'I') {
                    out-=roman[s[i-1]]*2;
                }
            }
            else if (s[i] == 'L' || s[i] == 'C') {
                if (s[i-1] == 'X') { 
                    out-=roman[s[i-1]]*2;
                }
            }
            else if (s[i] == 'D' || s[i] == 'M') {
                if (s[i-1] == 'C') {
                    out-=roman[s[i-1]]*2;
                }
            }
            
            out += roman[s[i]];
            
        }
        return out;
    }
};