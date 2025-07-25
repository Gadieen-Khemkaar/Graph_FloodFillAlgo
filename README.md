

## 🖌️ Flood Fill Algorithm using DFS (C++)

This repository contains a C++ implementation of the **Flood Fill algorithm** using **Depth-First Search (DFS)**. It's a classic graph traversal technique applied on a 2D grid, commonly used in image editing tools like the *bucket fill* in MS Paint.

---

### 🚀 Problem Statement

Given a 2D array (`image`) representing an image, and a starting pixel at coordinates `(sr, sc)`, **replace the color of the starting pixel and all adjacent pixels (up/down/left/right)** having the same color with a new color `newColor`.

---

### 🔍 Sample Input

```cpp
image = {
  {1, 1, 1},
  {1, 1, 0},
  {1, 0, 1}
};

sr = 1, sc = 1, newColor = 2
```

### ✅ Output

```cpp
{
  {2, 2, 2},
  {2, 2, 0},
  {2, 0, 1}
}
```

---

### 🧠 Approach: Depth-First Search (DFS)

We use DFS to recursively change all 4-directionally connected pixels that share the same original color.

* Use direction arrays `delRow[]` and `delCol[]` for cleaner traversal.
* Avoid revisiting or going out of bounds.
* Only fill if the color matches the original starting color.

---

### 🧾 Code Overview

```cpp
int delRow[] = {-1, +1, 0, 0};
int delCol[] = {0, 0, -1, +1};
```

```cpp
void dfs(...) {
    for (int it : {0, 1, 2, 3}) {
        int newRow = sr + delRow[it];
        int newCol = sc + delCol[it];

        // Check bounds and color match before recursive call
        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
            if (image[newRow][newCol] == initial_color && ans[newRow][newCol] != newColor) {
                dfs(...);
            }
        }
    }
}
```

---

### 📁 File Structure

```
├── flood_fill.cpp        # Main C++ file with the DFS algorithm
└── README.md             # You are here :)
```

---

### 🔧 How to Run

```bash
g++ flood_fill.cpp -o floodfill
./floodfill
```

Or run it in any C++ IDE like CodeBlocks, VS Code, etc.

---

### 🧩 Applications

* Paint bucket tool in graphics editors
* Region coloring in maps or diagrams
* Maze and area filling algorithms
* Connected component detection in graphs

---

### ✅ To Do

* [ ] Add BFS-based flood fill
* [ ] Add test cases
* [ ] Visual grid output (ASCII)

---
