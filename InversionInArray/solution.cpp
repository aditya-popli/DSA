class Solution {
public:
    int mergeCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
        int i = left, j = mid + 1, k = left, invCount = 0;
        
        // Merge the two halves
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                invCount += (mid - i + 1);  // All remaining elements in the left half are greater than arr[j]
            }
        }
        
        // Copy the remaining elements of the left half, if any
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        
        // Copy the remaining elements of the right half, if any
        while (j <= right) {
            temp[k++] = arr[j++];
        }
        
        // Copy the sorted subarray into the original array
        for (i = left; i <= right; i++) {
            arr[i] = temp[i];
        }
        
        return invCount;
    }
    
    int mergeSortCount(vector<int>& arr, vector<int>& temp, int left, int right) {
        int invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            
            invCount += mergeSortCount(arr, temp, left, mid);  // Count inversions in the left half
            invCount += mergeSortCount(arr, temp, mid + 1, right);  // Count inversions in the right half
            invCount += mergeCount(arr, temp, left, mid, right);  // Count inversions during merging
            
        }
        return invCount;
    }
    
    int countInversions(vector<int>& arr) {
        vector<int> temp(arr.size());
        return mergeSortCount(arr, temp, 0, arr.size() - 1);
    }
};
