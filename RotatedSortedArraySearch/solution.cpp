class Solution {
public:
    int findPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        if(nums[s] < nums[e]) return -1;

        while(s <= e) {
            int mid = s + (e - s) / 2;
            
            if(mid < e && nums[mid] > nums[mid+1]) return mid;
            if(mid > s && nums[mid] < nums[mid-1]) return mid - 1;

            if(nums[mid] >= nums[s]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while(s <= e) {
            int mid = s + (e - s) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid - 1;
            else s = mid + 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int piv = findPivot(nums);

        if(piv == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        if(nums[piv] == target) return piv;

        if(target >= nums[0]) {
            return binarySearch(nums, 0, piv - 1, target);
        }
        return binarySearch(nums, piv + 1, n - 1, target);
    }
};
