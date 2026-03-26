<div align="center">

# Stacks: Static & Dynamic:

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Explanation of LIFO (Last-In, First-Out) structures, memory management, and pointer-based stack frames.

---

### Overview:

</div>

  - **LIFO Principle:** The core rule of a Stack is **Last-In, First-Out**. The last element added is the first one to be removed, like a stack of plates.
  - **Static Stacks (Sequential):** Implemented using arrays with a `top` index. Fast and constant time, but limited by `MAX_SIZE`.
  - **Dynamic Stacks (Linked):** Elements are allocated on the heap. The `top` pointer always points to the last inserted Node, and each Node points to the one below it.
  - **Applications:** Used in function call management (Call Stack), undo/redo operations, and expression parsing.

-----

<div align="center">

### Complexity Comparison:

| Operation | Static Stack (Sequential) | Dynamic Stack (Linked) |
| :--- | :--- | :--- |
| **Push (Insert)** | $O(1)$ | $O(1)$ |
| **Pop (Remove)** | $O(1)$ | $O(1)$ |
| **Peek (Top)** | $O(1)$ | $O(1)$ |
| **Search** | $O(n)$ | $O(n)$ |
| **Memory Overhead** | Low (data only) | High (data + pointers) |

-----

### Main Methods:

</div>

  * `push()`: Adds an element to the top of the stack.
  * `pop()`: Removes and returns the element from the top.
  * `peek()`: Returns the top element without removing it.
  * `isEmpty()`: Checks if the stack has no elements.
  * `size()`: Returns the total count of elements currently in the stack.

---