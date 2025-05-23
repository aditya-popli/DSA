# 🔁 Reverse First K Elements of a Queue

**Difficulty:** Easy  
**Topic:** Queue, Stack, Data Structure

---

## 🧾 Problem Description

Given an integer `k` and a **queue of integers**, reverse the order of the **first k elements** of the queue, while keeping the **rest of the elements** in the **same relative order**.

### 🔧 Allowed Operations on Queue:
- `enqueue(x)`: Add an item `x` to the rear of the queue.
- `dequeue()`: Remove the item from the front of the queue.
- `size()`: Returns the number of elements in the queue.
- `front()`: Finds the front item.

> ✅ You can use in-built functions of the programming language to implement the logic.

---

## 🧪 Examples

### Example 1:
```text
Input:  q = [1, 2, 3, 4, 5], k = 3  
Output: [3, 2, 1, 4, 5]
