# 🔮 496. Next Greater Element I

**Difficulty:** Easy  
**Topics:** Stack, Hash Map, Array  
**Companies:** Amazon, Google, Bloomberg

---

## 🧾 Problem Description

The **next greater element** of some element `x` in an array is the first greater element that is to the **right of `x`** in the same array.

You are given two distinct 0-indexed integer arrays `nums1` and `nums2`, where `nums1` is a **subset** of `nums2`.

For each element in `nums1`, find the **next greater element** in `nums2`. If there is no next greater element, return `-1` for that query.

---

## 🧪 Examples

### Example 1:
```text
Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]

Explanation:
- 4 → no greater element after it → -1
- 1 → next greater is 3
- 2 → no greater element → -1
