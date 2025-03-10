# Set Matrix Zeroes

## Problem Statement
Given an `m x n` matrix, if an element is 0, set its entire row and column to 0. Do it in place without using extra space.

### Approach:
- We use the first row and first column to mark rows and columns that need to be set to zero.
- Use two variables to track whether the first row and first column need to be zeroed.

