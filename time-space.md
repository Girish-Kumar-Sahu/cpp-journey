## ⏱️ Time Complexity
- **Definition**: Measures how the running time of an algorithm grows with input size \(n\).
- **Notation**: Big-O (worst case), Big-Ω (best case), Big-Θ (average/tight bound).
- **Common complexities**:
  - \(O(1)\): Constant time (e.g., accessing an array element).
  - \(O(\log n)\): Logarithmic (e.g., binary search).
  - \(O(n)\): Linear (e.g., traversing an array).
  - \(O(n \log n)\): Log-linear (e.g., efficient sorting like mergesort).
  - \(O(n^2)\): Quadratic (e.g., nested loops).
  - \(O(2^n)\), \(O(n!)\): Exponential/factorial (e.g., brute-force recursion).

---

## 💾 Space Complexity
- **Definition**: Measures the amount of memory an algorithm uses relative to input size.
- **Components**:
  - **Fixed part**: Independent of input (constants, program size).
  - **Variable part**: Depends on input (arrays, recursion stack, dynamic allocations).
- **Examples**:
  - \(O(1)\): Constant space (e.g., iterative algorithms).
  - \(O(n)\): Linear space (e.g., storing an array of size \(n\)).
  - \(O(n^2)\): Quadratic space (e.g., adjacency matrix for graphs).

---

## Key Points
- **Trade-off**: Faster algorithms may use more memory, and memory-efficient ones may run slower.
- **Goal**: Choose algorithms that balance time and space for the problem constraints.
- **Practical tip**: Always analyze both — sometimes space is the limiting factor (e.g., embedded systems), sometimes time is (e.g., real-time apps).
