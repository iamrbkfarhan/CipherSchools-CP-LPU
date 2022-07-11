class Solution {
public:
    int trap(vector<int>& A) {
        int i = 0, j = A.size() - 1, ans = 0;
        while (i < j) {
            if (A[i] < A[j]) {
                int h = A[i];
                while (i < j && A[i] <= h) {
                    ans += h - A[i];
                    ++i;
                }
            } else {
                int h = A[j];
                while (i < j && A[j] <= h) {
                    ans += h - A[j];
                    --j;
                }
            }
        }
        return ans;
    }
};