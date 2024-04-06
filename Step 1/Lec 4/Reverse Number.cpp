class Solution {
public:
    int reverse(int x) {
        long long rem = 0;
        while (x!=0) {
            rem = rem*10 + x%10;
            x/=10;
        }
        return rem;
    }
};

// Wrong Answer!
// Custom i/p: 1534236469
