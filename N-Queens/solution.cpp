class Solution {
public:
    bool check(vector<string> &vis, int i, int j){
        for (int k = 1; k <= i; k++) {
            if (vis[i - k][j] == 'Q') return false;
            if (j - k >= 0 && vis[i - k][j - k] == 'Q') return false;
            if (j + k < vis.size() && vis[i - k][j + k] == 'Q') return false;
        }
        return true;
    }

    void solve(vector<vector<string>> &ans, vector<string> &vis, int n, int index){
        if(index == n){
            ans.push_back(vis);
            return; 
        }

        for(int j = 0; j < n; j++){
            if(check(vis, index, j)){
                vis[index][j] = 'Q';
                solve(ans, vis, n, index + 1);
                vis[index][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> vis(n, string(n, '.'));
        solve(ans, vis, n, 0);
        return ans;
    }
};
