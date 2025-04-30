# 🔁 Reverse Nodes in k-Group

This project implements a solution to reverse nodes in a singly linked list in groups of size `k`.

## 📌 Problem Statement

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return the modified list.

- Nodes that are not part of a group of `k` should remain in their original order.
- You may not alter the values of the nodes, only the nodes themselves may be changed.

## 💡 Approach

We use a dummy node and simulate group-wise reversal using pointer manipulation.

Steps:
1. Count total nodes in the list.
2. Iterate while `count >= k`.
3. Reverse `k` nodes using three pointers: `pre`, `cur`, and `nex`.
4. Move the `pre` pointer forward by `k` and repeat until done.
