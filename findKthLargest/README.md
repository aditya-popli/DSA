# 🏆 Find Kth Largest Element in Array using Heapify (C++)

This repository contains a C++ implementation to find the **K-th largest element in an unsorted array** using the **Heapify approach (Max-Heap)**.

---

## 📌 Problem Statement
Given an integer array `nums` and an integer `k`, return the **k-th largest element** in the array.

> 🔹 Example:  
> Input: `nums = [3,2,1,5,6,4]`, `k = 2`  
> Output: `5`

---

## 🚀 Approach: Heapify (Max-Heap)
- Build a **Max-Heap** of the array.
- Extract the maximum element **k-1 times**.
- The element at the root after k-1 extractions is the **k-th largest element**.
