# Maximum Subarray Problem (Kadane's Algorithm)

This is a solution to the **Maximum Subarray Problem** using **Kadane's Algorithm**, which finds the contiguous subarray with the largest sum within a one-dimensional numeric array.

## Problem Statement

Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

## Solution Explanation

### Algorithm

The algorithm uses Kadane's approach, which works by iterating through the array while keeping track of the current subarray sum (`sum`). If `sum` becomes negative, it is reset to 0 since a negative sum will reduce the potential sum of any future subarray. The result is stored in a variable `maxi`, which is updated if `sum` exceeds the current maximum value.

### Steps:
1. Initialize `maxi` to the first element in the array and `sum` to 0.
2. Iterate through the array:
   - Add the current element to `sum`.
   - Update `maxi` to the larger of `maxi` or `sum`.
   - If `sum` is negative, reset `sum` to 0.
3. Return the value of `maxi`, which holds the largest subarray sum.
