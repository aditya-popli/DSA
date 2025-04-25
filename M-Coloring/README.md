# 🎨 Graph Coloring Problem (M-Coloring) in C++

This repository contains a C++ solution to the **M-Coloring Problem**, where the task is to determine if a given undirected graph can be colored with at most `m` colors such that no two adjacent vertices share the same color.

---

## 📌 Problem Statement

Given:
- An undirected graph with `V` vertices and `E` edges.
- A list of edges (`edges[][]`) where each edge connects two vertices.
- An integer `m` representing the maximum number of colors available.

**Goal:**  
Determine whether it is possible to color the graph using at most `m` colors such that **no two adjacent vertices have the same color**.

---

## 🧠 Approach

The problem is solved using **Backtracking**:
- Try assigning each color from 1 to `m` to every vertex.
- Before assigning, check if the color is **safe** for the current vertex (i.e., no adjacent vertex has the same color).
- If all vertices are successfully colored, return `true`; otherwise, backtrack.

---
