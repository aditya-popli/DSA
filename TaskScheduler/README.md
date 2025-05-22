# 621. Task Scheduler

**Difficulty:** Medium  
**Tags:** Greedy, Heap (Priority Queue), Counting

---

## 🧾 Problem Description

You are given an array of **CPU tasks**, each represented by a capital letter from `A` to `Z`, and an integer `n` representing the **cooldown period** between the same tasks.

Each interval can either:
- Execute a task
- Be idle (if no task can be executed due to the cooldown constraint)

Your task is to return the **minimum number of intervals** required to finish all tasks.

---

## 🔍 Constraints

- `1 <= tasks.length <= 10⁴`
- `tasks[i]` is an uppercase English letter (`A-Z`)
- `0 <= n <= 100`

---

## 🧪 Examples

### Example 1:

**Input:**
```text
tasks = ["A","A","A","B","B","B"], n = 2
