class Solution {
public:
    void recur(vector<int>& nums, vector<vector<int>>& out, int index, vector<int>& ans) {
        out.push_back(ans);

        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1]) continue;
            
            ans.push_back(nums[i]);
            recur(nums, out, i + 1, ans);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> out;
        vector<int> ans;
        recur(nums, out, 0, ans);
        return out;
    }
};
