int NthRoot(int n, int m) {
   int low = 1, high = m;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        long long midPower = 1;
        for (int i = 0; i < n; ++i) {
            midPower *= mid;
            if (midPower > m) break; // Avoid overflow
        }
        
        if (midPower == m) {
            return mid;
        } else if (midPower < m) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}
