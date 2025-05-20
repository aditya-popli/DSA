# MedianFinder

A C++ implementation of an efficient **Median Finder** using two heaps (priority queues). This allows for dynamic data insertion and real-time median calculation in logarithmic time.

## 🧠 Algorithm

We use two heaps:
- **Max-heap** (`left`) to store the smaller half of the numbers.
- **Min-heap** (`right`) to store the larger half.

### Why Two Heaps?
This structure allows us to:
- Insert numbers in **O(log n)** time.
- Get the median in **O(1)** time.

We ensure:
- `left` always contains the median if the count of numbers is odd.
- Both heaps are balanced in size (difference is at most 1).

---

