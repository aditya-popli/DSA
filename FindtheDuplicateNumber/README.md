# Find Duplicate Number (Floyd's Tortoise and Hare Algorithm)

This repository contains an implementation of the **Find Duplicate Number** problem using **Floyd's Tortoise and Hare Algorithm** (also known as the cycle detection algorithm). The solution efficiently finds the duplicate number in an array, where the array contains at least one duplicate number, and the numbers are in the range `1` to `n` (inclusive), where `n` is the size of the array.

## Problem Statement

Given an array of integers, where each integer is in the range from `1` to `n` (inclusive), and the array contains at least one duplicate number, find the duplicate number in the array. You must solve it using **O(n)** time complexity and **O(1)** space complexity.

## Solution Overview

The solution is based on the cycle detection algorithm, which uses **two pointers** (slow and fast) to detect a cycle in the array. Here's how it works:

1. **Cycle Detection**: We use two pointers, `slow` and `fast`. The `slow` pointer moves one step at a time, while the `fast` pointer moves two steps at a time. If there is a cycle (which is guaranteed by the presence of a duplicate), the two pointers will eventually meet inside the cycle.
   
2. **Find the Entrance to the Cycle**: Once a cycle is detected, we reset the `slow` pointer to the beginning of the array and move both `slow` and `fast` pointers one step at a time. The point where they meet again is the starting point of the cycle, which is the duplicate number.

