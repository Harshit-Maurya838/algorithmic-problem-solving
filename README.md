# Data Structures & Algorithms (DSA) and Competitive Programming

<div align="center">
  <img src="https://img.shields.io/badge/Language-Java-orange.svg" alt="Java">
  <img src="https://img.shields.io/badge/Language-C++-blue.svg" alt="CPP">
  <img src="https://img.shields.io/badge/Platform-Codeforces-red.svg" alt="Codeforces">
  <img src="https://img.shields.io/badge/Platform-LeetCode-yellow.svg" alt="LeetCode">
</div>

## 📌 About This Repository
Welcome to my personal workspace for Data Structures, Algorithms, and Competitive Programming! 

This repository serves as a log of my continuous learning and problem-solving journey. Here, you will find my optimized solutions to various algorithmic challenges, ranging from standard LeetCode problems to complex mathematical and logic-based puzzles on Codeforces. 

My primary focus is on writing **clean, efficient, and well-structured code** in both **Java** and **C++**.

## 📂 Repository Structure
The repository is systematically organized by platform and programming language for easy navigation:

```text
📦 DSA
 ┣ 📂 CodeForces
 ┃ ┗ 📂 C++       # Codeforces solutions in C++
 ┗ 📂 Leetcode
   ┗ 📂 Java       # Leetcode DSA solutions in Java
```
*(As the repository grows, solutions will be further categorized by difficulty rating and topics like `Arrays`, `DynamicProgramming`, etc.)*

## 🧠 Core Competencies & Topics
This repository contains implementations and problem-solving techniques across various critical domains:

### 🔢 Mathematics & Number Theory
- Prime Factorization, Sieve of Eratosthenes & Linear Sieve
- Greatest Common Divisor (GCD) & Extended Euclidean Algorithm
- Modular Arithmetic, Fast Exponentiation & Modular Inverse
- Combinatorics ($nCr \pmod p$) & Number-Theoretic Functions

### 🏗️ Data Structures
- **Linear:** Arrays, Strings, Vectors, Linked Lists, Stacks, Queues, Deques
- **Trees & Graphs:** Binary Trees, BSTs, Heaps / Priority Queues, Tries
- **Advanced & CP Structures:** Segment Trees, Fenwick Trees (Binary Indexed Tree), Disjoint Set Union (DSU), Policy-Based Data Structures (`pb_ds`)

### ⚙️ Algorithmic Paradigms
- **Searching & Sorting:** Binary Search, Binary Search on Answer, Merge Sort, Quick Sort
- **Dynamic Programming (DP):** 1D/2D DP, Memoization, Tabulation, Bitmask DP, Knapsack variants
- **Graph Theory:** BFS, DFS, Dijkstra, Bellman-Ford, Floyd-Warshall, Topological Sort, Minimum Spanning Trees (Kruskal/Prim)
- **Optimization Techniques:** Greedy Algorithms, Two Pointers, Sliding Window, Bit Manipulation, Coordinate Compression

## 💻 Technical Stack
- **C++ (C++17 / C++20):** Primary language for Competitive Programming (Codeforces). Chosen for optimal runtime performance, minimal memory overhead, the Standard Template Library (STL: `vector`, `set`, `map`, `priority_queue`, algorithms), and fast I/O handling (`ios_base::sync_with_stdio(false); cin.tie(NULL);`).
- **Java:** Utilized for heavily structured, object-oriented solutions. I leverage Java's robust Collections framework extensively for LeetCode and complex data structure implementation.

## 🏆 Personal Goals
- [ ] Master core algorithmic patterns for technical interviews.
- [ ] Consistently participate in Codeforces contests and improve rating.
- [ ] Maintain a strong, disciplined daily streak of problem-solving in both C++ and Java.
- [ ] Build a robust repository of optimal, clean, and reusable templates.

## 🚀 How to Run Locally

### C++ Solutions
Navigate to the directory containing the file and compile using `g++` (targeting `.out` so binaries remain git-ignored):
```bash
# Compile with C++17 and optimizations
g++ -std=c++17 -O2 FileName.cpp -o FileName.out

# Run executable
./FileName.out

# (Optional) Run with input redirection
./FileName.out < input.txt
```
*(On Windows, replace `.out` with `.exe`: `g++ -std=c++17 -O2 FileName.cpp -o FileName.exe && FileName.exe`)*

### Java Solutions
Navigate to the directory containing the file and run:
```bash
javac FileName.java
java FileName
```

---
<div align="center">
<i>If you are a recruiter or a fellow developer reviewing this repository, thank you for your time! I am deeply passionate about algorithm optimization and problem-solving, and I'm always open to feedback.</i>
</div>