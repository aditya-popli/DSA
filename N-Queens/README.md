# N-Queens Problem Solver in C++

This repository contains a C++ implementation to solve the classic **N-Queens** problem using **backtracking**.

## 🧩 Problem Statement

The N-Queens problem asks how to place `n` queens on an `n x n` chessboard so that no two queens threaten each other. That is, no two queens share the same row, column, or diagonal.

## ✅ Solution Overview

The algorithm uses **recursive backtracking** to try all possible configurations of queens row by row. It ensures that every queen placed is safe from attacks based on the rules of chess.

### Key Concepts:
- **Backtracking**: Tries placing a queen in each column of the current row and recursively proceeds to the next row if the placement is valid.
- **Safety Check**: Before placing a queen, it checks:
  - Column above.
  - Left diagonal above.
  - Right diagonal above.

## 🧠 Algorithm

### `check()`
Validates whether a queen can be safely placed at `(i, j)`.

### `solve()`
Recursive function to build the board row by row, backtracking when necessary.

### `solveNQueens()`
Initializes the board and starts the solving process.
