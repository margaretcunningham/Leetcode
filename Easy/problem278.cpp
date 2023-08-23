// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long i = n/2;
        long long s = 1;
        long long e = n;
        while(1) {
            if (isBadVersion(i)) {
                if (!isBadVersion(i-1)) {
                    return i;
                } else {
                    e = i;
                }
            } else {
                if (isBadVersion(i+1)) {
                    return i+1;
                } else {
                    s = i;
                }
            }
            i = (e+s)/2;
        }
        return i;
    }
};
