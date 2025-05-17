## 🐭 Problem: Rat in a Maze (Backtracking)

### Problem Statement:

You are given a `N x N` grid (maze) represented by a 2D matrix `mat`, where:

- `mat[i][j] == 1` represents a **free cell** through which the rat can move.
- `mat[i][j] == 0` represents a **blocked cell** through which the rat **cannot** move.

The rat starts at the **top-left corner** of the maze (`mat[0][0]`) and wants to reach the **bottom-right corner** (`mat[N-1][N-1]`).

The rat can move in **four directions**:

- `'D'`: Down
- `'U'`: Up
- `'R'`: Right
- `'L'`: Left

Your task is to **find all possible paths** from the top-left to the bottom-right such that the rat **only moves through valid (1) cells** and **does not visit the same cell more than once in a single path**.

Each path should be represented as a string of characters, where each character corresponds to a move. Return all possible paths in **lexicographical order**.

---

### Input:

- An integer matrix `mat` of size `N x N` (1 ≤ N ≤ 10), where each element is either 0 or 1.

### Output:

- A list of strings, where each string is a valid path from the start to the destination.
- If there is no valid path, return an empty list.

---

### Example:

#### Input:

```cpp
mat = {
    {1, 0, 0, 0},
    {1, 1, 0, 1},
    {1, 1, 0, 0},
    {0, 1, 1, 1}
};
```

#### Output:

```
DDRDRR
DRDDRR
```

---

### Notes:

- You may use backtracking to explore all possible paths.
- Avoid revisiting the same cell in a single path.
- The order of output paths doesn't have to be sorted unless explicitly required.

---
