# 🏆 Sorting an Array using Heap Sort (C++ Implementation)

This repository contains a **C++ solution to sort an array using the Heap Sort algorithm** implemented with the **Heapify approach (Max-Heap)**.

---

## 📌 Problem Statement
Given an array of integers, sort the array in **ascending order** using Heap Sort.

> 🔹 Example:  
> Input: `nums = [5, 3, 8, 4, 1, 2]`  
> Output: `[1, 2, 3, 4, 5, 8]`

---

## 🚀 Approach: Heap Sort using Heapify
- Build a **Max-Heap** of the given array.
- Repeatedly swap the root (maximum element) with the last element.
- Reduce the heap size by one and **heapify** again.
- Repeat until the array is fully sorted.
