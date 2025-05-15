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
    void heapSort(vector<int>& nums, int n) {
        if (n == 1)
            return;
        swap(nums[0], nums[n - 1]);
        heapify(nums, 0, n - 1);
        heapSort(nums, n - 1);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2; i >= 0; i--) {
            heapify(nums, i, n);
        }
        heapSort(nums, n);
        return nums;
    }
};
