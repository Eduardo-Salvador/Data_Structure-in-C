# Data Structures Project

## Overview

A **data structure** is a method of organizing and storing data on a computer so that it can be accessed and manipulated efficiently. Data structures act as "containers" that group data according to specific rules and principles, optimizing processing, searching, and other operations in software systems. Choosing the right data structure is crucial for algorithm performance and the overall efficiency of a system.

---

## First Structure: **Stacks**

### Why Stacks?
- Organize data in a controlled way, with access only to the **top** element.
- Prevent errors when the **order of execution** matters.
- Simplify **memory management** and **recursion** handling.

### Common Uses
- **Function calls** (recursion)
- **Undo/Redo** operations in software
- **Web browsers** (back/forward navigation)
- **Mathematical expressions** (operator precedence)
- **Compilers** (syntax parsing)

### Essential Stack Operations

| Operation      | Description                                                   |
|----------------|---------------------------------------------------------------|
| `push`         | Adds an element to the top of the stack                      |
| `pop`          | Removes the element from the top of the stack                |
| `peek` / `top` | Returns the top element without removing it                  |
| `isEmpty`      | Checks if the stack has no elements                          |
| `isFull`       | Checks if the stack has reached its maximum capacity (for fixed stacks) |

### Fixed Stacks (Static Size)
A **fixed stack** has a predetermined size. Once full, no new elements can be added until some are removed.  

**Example use cases:**
- Limited-memory embedded systems  
- Certain algorithm implementations where maximum depth is known in advance  

---

> This project will explore **stack implementations**, including both **fixed** and **dynamic stacks**, and demonstrate their practical applications in software systems.

