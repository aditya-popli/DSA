# 🔁 232. Implement Queue using Stacks

**Difficulty:** Easy  
**Topics:** Stack, Queue, Data Structures

---

## 🧾 Problem Description

Implement a first-in-first-out (FIFO) queue using only **two stacks**. The implemented queue should support all the functions of a normal queue:

### Class `MyQueue` should support:
- `push(x)`: Push element `x` to the back of the queue.
- `pop()`: Removes the element from the front of the queue and returns it.
- `peek()`: Returns the element at the front of the queue.
- `empty()`: Returns `true` if the queue is empty, `false` otherwise.

> ❗Only standard stack operations are allowed: push to top, pop from top, peek, size, and isEmpty.

---

## 🧪 Examples

```text
Input:
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]

Output:
[null, null, null, 1, 1, false]

Explanation:
MyQueue myQueue = new MyQueue();
myQueue.push(1);     // queue: [1]
myQueue.push(2);     // queue: [1, 2]
myQueue.peek();      // return 1
myQueue.pop();       // return 1, queue is now [2]
myQueue.empty();     // return false
