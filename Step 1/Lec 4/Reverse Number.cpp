class Solution {
public:
    int reverse(int x) {
        int dig, rem = 0;
        while (x!=0) {
            dig = x%10;
            rem = rem*10 + dig;
            x/=10;
        }
        return rem;
    }
};
