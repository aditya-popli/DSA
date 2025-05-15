class Solution {
public:
     void heapify(vector<int>& nums, int i, int n) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int maxi = i;

        if (left < n && nums[left] > nums[maxi]) {
            maxi = left;
        }
        if (right < n && nums[right] > nums[maxi]) {
            maxi = right;
        }
        if (maxi != i) {
            swap(nums[maxi], nums[i]);
            heapify(nums, maxi, n);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = n/2 ; i >= 0; i--) {
            heapify(nums, i, n);
        }
        for(int i = 0; i < k-1; i++){
            swap(nums[0], nums[n-i-1]);
            heapify(nums, 0, n-i-1);
        }
        return nums[0];
    }
};
