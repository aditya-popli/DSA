class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans,
               int sum, int i, vector<int>& out) {
        if (sum == target) {
            ans.push_back(out);
            return;
        }
        if (sum > target || i >= candidates.size()) {
            return;
        }
        out.push_back(candidates[i]);
        solve(candidates, target, ans, sum + candidates[i], i, out);
        out.pop_back();
        solve(candidates, target, ans, sum, i + 1, out);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> out;
        solve(candidates, target, ans, 0, 0, out);
        return ans;
    }
};
