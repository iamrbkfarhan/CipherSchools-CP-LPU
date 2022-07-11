class Solution {
    vector<bool> col, hill, dale;
    int n;
    int dfs(int i) {
        if (i == n) {
            return 1;
        }
        int ans = 0;
        for (int j = 0; j < n; ++j) {
            int h = i + j, d = i + n - 1 - j;
            if (col[j] || hill[h] || dale[d]) continue;
            col[j] = hill[h] = dale[d] = true;
            ans += dfs(i + 1);
            col[j] = hill[h] = dale[d] = false;
        }
        return ans;
    }
public:
    int totalNQueens(int n) {
        this->n = n;
        col.assign(n, false);
        hill.assign(2 * n - 1, false);
        dale.assign(2 * n - 1, false);
        return dfs(0);
    }
};