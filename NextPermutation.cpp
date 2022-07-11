class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int N = A.size(), i = N - 2;
        for (; i >= 0 && A[i] >= A[i + 1]; --i);
        if (i < 0) {
            reverse(begin(A), end(A));
            return;
        }
        reverse(begin(A) + i + 1, end(A));
        int j = upper_bound(begin(A) + i + 1, end(A), A[i]) - begin(A);
        swap(A[i], A[j]);
    }
};