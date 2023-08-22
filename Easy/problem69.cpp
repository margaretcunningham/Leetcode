class Solution {
public:
    int mySqrt(int x) {
        for (unsigned long long i = 0; i < 46400; i++) {
            if (i*i == x) {
                return i;
            } else {
                if (i*i > x) {
                    return i-1;
                }
            }
        }
        return 0;
    }
};
