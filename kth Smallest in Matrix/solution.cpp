class Solution {
public:
    int helper(vector<vector<int>>& matrix, int mid, int n){
        int cnt = 0;
        int r = n-1;
        int c = 0;

        while(r >= 0 && c < n){
            if(matrix[r][c] <= mid){
                cnt += r + 1;
                c++;
            } else{
                r--;
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int s = matrix[0][0];
        int e = matrix[n-1][n-1];

        while(s <= e){
            int mid = (s+e) / 2;
            int cnt = helper(matrix, mid, n);
            if(cnt < k ){
                s = mid + 1;
            } else{
                e = mid - 1;
            }
        }
        return s;
    }
};
