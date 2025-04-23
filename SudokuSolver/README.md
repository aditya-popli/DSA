# 🧩 Sudoku Solver (C++)

This repository contains a C++ implementation of a **Sudoku Solver** using **backtracking**. The algorithm fills in empty cells (`'.'`) on a standard 9x9 Sudoku board such that the completed board satisfies all Sudoku rules.

---

## 📌 Features

- Solves any valid 9x9 Sudoku puzzle
- Uses efficient recursive backtracking
- Validates every move before placing a number
- Lightweight and fast

---

## 🧠 How it Works

1. **Recursively scans the board** to find an empty cell.
2. **Tries digits** from `'1'` to `'9'` in that cell.
3. Uses the `isValid()` function to ensure the move doesn't:
   - Repeat in the row
   - Repeat in the column
   - Repeat in the 3x3 subgrid
4. If valid, the digit is placed, and the process repeats.
5. If a dead-end is reached, it **backtracks** and tries the next possibility.

