class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for (int i = 0; i<s.length();i++) {
            m[s[i]]++;
        }
        int count = 0;
        bool stat = false;
        for (auto a = m.begin(); a!= m.end(); a++) {
            if (a->second%2==1 && !stat) {
                count++;
                a->second--;
                stat=true;
            }
            count+=(a->second/2)*2;
        }
        return count;
    }
};
