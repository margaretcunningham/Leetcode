class Solution {
public:
    bool isHappy(int n) {
        int count = 0;
        int sum = n;
        set<int> s;
        
        while (sum!=1) {
            int arr[10000] ={0};
            
            while (sum > 0) {
                arr[count] = sum % 10;
                sum = sum / 10;
                count++;
            }
            
            for (int i = 0; i < count; i++) {
                sum += arr[i] * arr[i];
            }

            if (s.count(sum) > 0) {
                return false;
            } else {
                s.insert(sum);
            }
            
        }
        
        return true;
    }
};
