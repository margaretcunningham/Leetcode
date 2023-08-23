class Solution {
public:
    string addBinary(string a, string b) {
        string s, small;
        string big;
        bool carry = false;
        int longest = 0;
        int shortest = 0;
        int save = 0;
        if (a.length() > b.length()) {
            longest = a.length();
            shortest = b.length();
            big = a;
            small = b;
        } else {
            longest = b.length();
            shortest = a.length();
            big = b;
            small = a;
        }
        int j = shortest-1;
    
        for (int i = longest-1; i>=0; i--) {
            if (big[i] == '0' && small[j] == '0') {
                if (carry == true) {
                    s = '1' + s;
                    carry = false;
                } else {
                    s = '0' + s;
                }
            }
            else if (big[i] == '1' && small[j] == '0') {
                if (carry == true) {
                    s = '0' + s;
                } else {
                    s = '1' + s;
                }
            } 
            else if (big[i] == '0' && small[j] == '1') {
                if (carry == true) {
                    s = '0' + s;
                } else {
                    s = '1' + s;
                }
            }
            else if (big[i] == '1' && small[j] == '1') {
                if (carry == true) {
                    s = '1' + s;
                    
                } else {
                    s = '0' + s;
                    carry = true;
                }
            }
            j--;
            if (j < 0) {
                save = i;
                break;
            }
        }
        
        int i = save-1;
    
        while (i >= 0) {
            if (big[i] == '1' && carry == true) {
                s = '0' + s;
                carry = true;
            } 
            else if (big[i] == '0' && carry == true) {
                s = '1' + s;
                carry = false;
            }
            else {
                s = big[i] + s;
            }
            i--;
        }

        if (carry == true) {
            s = '1' + s;
            return s;
        }

        return s;
    }
};
