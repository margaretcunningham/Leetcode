class Solution {
public:
     map<int, int> m;
    int fib(int n) {
        if (n == 0){
            m[n] = 0;
            return 0;
        }
        if (n == 1){
            m[n] = 1;
            return 1;
        }
        if (m.count(n) >0){
            return m[n];
        }
        else {
            int ret = fib(n-1) + fib(n-2);
            m[n] = ret;
            return ret;
        }
    }
};
