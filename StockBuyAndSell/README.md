# Maximum Profit Solution

This C++ program provides an implementation of a solution to the "Best Time to Buy and Sell Stock" problem.

## Problem Description

Given an array of prices where `prices[i]` is the price of a given stock on the ith day, the task is to find the maximum profit that can be achieved by buying on one day and selling on another day in the future. The goal is to find the maximum difference between a price at a later time and a price at an earlier time.

## Approach

1. Initialize the `buy` variable with the first price (`prices[0]`) and set the initial `profit` to 0.
2. Iterate through the `prices` array from the second day onward.
3. If a price is lower than the current `buy` price, update `buy` to the current price.
4. If the profit from selling at the current price is greater than the previously recorded profit, update the `profit`.
5. Return the `profit` after completing the iteration.


