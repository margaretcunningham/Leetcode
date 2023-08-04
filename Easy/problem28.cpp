class Solution {
public:
    int strStr(string haystack, string needle) {
        int sum = 0;
        int index = 0;
        for (int i = 0; i < haystack.length(); i++) {
            if (needle[0] == haystack[i]) {
                index = i;
                sum+=1;
                for (int j = 1; j < needle.length(); j++) {
                    if (needle[j] == haystack[i+j]) {
                        sum+=1;
                    } else {
                        break;
                    }
                }
            } 
            cout << sum;
            if (sum == needle.length()) {
                return index;
            } else {
                sum = 0;
            }
        }
        return -1;
    }
};
