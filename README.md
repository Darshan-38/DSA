# DSA

This repository contains implementations of **Data Structures and Algorithms (DSA)** problems.

---

## Concatenation of Array

### Problem Description
This program takes an array as input and creates a new array by concatenating the original array with itself.

### Example

**Input:**
```
[10, 20, 30]
```

**Output:**
```
[10, 20, 30, 10, 20, 30]
```

### Explanation
- Given an array `arr` of size `n`
- Create a new array `ans` of size `2n`
- Copy elements as follows:
  - `ans[i] = arr[i]`
  - `ans[i + n] = arr[i]`

This results in the original array being repeated twice.
