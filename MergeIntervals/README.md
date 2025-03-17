# Interval Merge Solution

This repository contains a C++ solution to the problem of merging overlapping intervals.

## Problem Description

Given a collection of intervals, the task is to merge all overlapping intervals. For example, if the input consists of intervals `[1,3], [2,4], [5,7]`, the function should merge the overlapping intervals into a single interval `[1,4], [5,7]`.

## Algorithm

1. **Sort the intervals**: First, sort the intervals based on their starting values.
2. **Iterate through the intervals**: Traverse through the sorted intervals and merge the overlapping intervals.
3. **Merge intervals**: If the current interval does not overlap with the last interval in the result, simply add it. If there is an overlap, merge the two intervals by updating the end of the last interval in the result.
   
The approach runs in O(n log n) time due to sorting, followed by a single pass through the list, making it efficient for large inputs.

