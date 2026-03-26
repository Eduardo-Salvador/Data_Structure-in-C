<div align="center">

# Queues: Static & Dynamic

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Explanation of FIFO (First-In, First-Out) structures, sequential vs. linked memory management, and pointer manipulation.

---

### Overview:

</div>

  - **FIFO Principle:** The core rule of a Queue is **First-In, First-Out**. The first element added is the first one to be removed, similar to a real-life waiting line.
  - **Static Queues (Sequential):** Built using fixed-size arrays (`MAX_SIZE`). They are fast but can face "overflow" if the array limit is reached. In this project, we implement shifts to keep the front at index 0.
  - **Dynamic Queues (Linked):** Elements (Nodes) are allocated at runtime using `malloc()`. They use `start` and `end` pointers to allow $O(1)$ insertions and removals without size constraints.
  - **Struct Handling:** Includes implementations for basic types (`int`, `float`) and complex data like the `People` struct (Name, Age, Gender).

-----

<div align="center">

### Complexity Comparison:

| Operation | Static Queue (Sequential) | Dynamic Queue (Linked) |
| :--- | :--- | :--- |
| **Enqueue (Insert)** | $O(1)$ | $O(1)$ |
| **Dequeue (Remove)** | $O(n)$ (requires shift) | $O(1)$ |
| **Peek (Front)** | $O(1)$ | $O(1)$ |
| **Search** | $O(n)$ | $O(n)$ |
| **Memory Overhead** | Low (data only) | High (data + pointers) |

-----

### Main Methods:

</div>

  * `enqueue()`: Adds an element to the end of the queue.
  * `dequeue()`: Removes and returns the element from the front.
  * `peek()`: Observes the front element without removing it.
  * `list()`: Traverses the queue to print all elements.
  * `clear()`: Wipes all data and resets the structure.

-----