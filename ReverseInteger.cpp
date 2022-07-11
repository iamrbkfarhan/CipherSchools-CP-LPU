class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while (x) {
            int d = x % 10;
            x /= 10;
            if ((r >= 0 && (r > INT_MAX / 10 || INT_MAX - 10 * r < d))
                || (r < 0 && (r < INT_MIN / 10 || INT_MIN - 10 * r > d))) return 0;
            r = r * 10 + d;
        }
        return r;
    }
};