class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int num = 0;
        int sum = 0;
        num = digits[digits.size()-1];
        if (num == 9) {
            digits[digits.size()-1] = 0; 
            sum = 1;
            for (int i = 2; i <= digits.size(); i++) {
                num = digits[digits.size()-i];
                if (num != 9) {
                    digits[digits.size()-i] += 1;
                    return digits;
                } else {
                    digits[digits.size()-i] = 0;
                    sum +=1;
                }
            }
            if (sum == digits.size()) {
                ans.push_back(1);
                for (int i = 0; i < sum; i++) {
                    ans.push_back(0);
                }
                return ans;
            }
            return digits;
        } // loop
        else {
            digits[digits.size()-1] += 1;
            ans = digits;
        }

        cout << sum;



        return ans;
    }
};
