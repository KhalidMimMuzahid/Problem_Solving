# 🧮 Inversion Count Problem

## Problem Statement

Given an array of integers, write a function to **count the number of inversion pairs** in the array.

A **pair (i, j)** is called an **inversion** if it satisfies both of the following conditions:

- `i < j`
- `arr[i] > arr[j]`

Your task is to implement the logic to **count the total number of such inversion pairs** in the array.

### ✍️ Example

```cpp
Input:  arr = {1, 3, 5, 10, 2, 6, 8, 9}
Output: 6

Explanation:
The inversion pairs are:
(3,2), (5,2), (10,2), (10,6), (10,8), (10,9)
=> Total count = 6
```

---

## ✅ Your Tasks

1. **Understand the problem statement.**
2. Implement a function that recursively counts the number of inversion pairs.
3. Run the given test case to verify the output.
4. (Optional) Try optimizing the solution for large input sizes.

---

## 💡 Constraints

- `1 <= arr.length <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

---

## 📁 Provided Files

You are given a C++ source file with a partially completed solution using recursion. Understand and analyze it before making changes.
