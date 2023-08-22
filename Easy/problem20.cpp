class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(')');
            } else if (s[i] == '[') {
                st.push(']');
            } else if (s[i] == '{') {
                st.push('}');
            } else {
                if (st.empty()) {
                    return false;
                }
                char c = st.top(); 
                st.pop();
                if (s[i] != c) {
                    return false;
                }
            }
        }
        if (st.empty() == false) {
            return false;
        }
        return true;
    }
};
