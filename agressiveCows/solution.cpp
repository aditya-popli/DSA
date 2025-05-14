class Solution {
public:
    bool canWePlace(vector<int> &nums, int dist, int k){
        int n = nums.size();
        int cnt = 1;
        int last = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i] - last >= dist){
                cnt++;
                last = nums[i];
            }
            if(cnt == k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &nums, int k) {
        int n  = nums.size();
        sort(nums.begin(), nums.end());
        int low = 1, high = nums[n - 1] - nums[0];
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canWePlace(nums, mid, k) == true) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return high;  
    }
};
