# Static Stack Performance Measurement in C

This project focuses on **measuring the performance** of basic **stack operations** implemented using a **fixed-size (static) array**, by calculating the **execution time in CPU clock ticks**.  
The goal is **not** to demonstrate stack logic, but rather to **analyze computational cost** of the main operations: push, pop, and print.

---

## Overview

The program allows users to define the number of elements to be manipulated and then measures, using the C standard library function `clock()`, how many **CPU clock cycles** each operation consumes.

This enables performance analysis as the stack size grows, helping to understand **time complexity (Big O)** in practical terms.

---

## Operations and Complexity

| Operation | Description | Big O Complexity | Measured Metric |
|------------|-------------|------------------|-----------------|
| **Push** | Inserts `N` random elements into the stack | **O(1)** per element → **O(N)** total | Clock ticks used |
| **Pop** | Removes `N` elements from the stack top | **O(1)** per element → **O(N)** total | Clock ticks used |
| **Print Stack** | Prints all elements currently in the stack | **O(N)** | Clock ticks used |

### 🧠 Big O Explanation
- Each individual **push** or **pop** operation takes **constant time** `O(1)`, since it only modifies the top index and accesses an array position.
- When these operations are performed repeatedly for `N` elements, the total cost becomes **linear** (`O(N)`).
- The **print** operation iterates through all elements in the stack, thus inherently **O(N)**.

The goal of this experiment is to **compare actual CPU time (clocks)** with the theoretical **Big O behavior**.

---

## Project Structure

```
📦 FixedStack
├── fixedStacks.h   # Header file with stack structure and function prototypes
├── fixedStacks.c   # Implementation of stack operations
└── main.c          # Interactive menu + performance measurement
```

---

## Example Run

```
Enter the quantity elements for insert: 5000
Inicialize stack is successfull

MENU
1. Insert 5000 elements on stack
2. Pop 5000 elements on stack
3. Print Stack
4. Inicialize Stack
5. Exit
Enter the option: 1
Element: 123
Element: 89
Element: 15
...
Utilized: 4238.00 clocks.
```

At the end of each operation, the total **number of clock ticks** used is printed, allowing the user to observe real performance differences.

---

## Menu Options

1. **Insert Elements (Push)** — measures total insertion time  
2. **Remove Elements (Pop)** — measures total removal time  
3. **Print Stack** — measures time to display the stack contents  
4. **Reinitialize Stack** — clears all data and resets the top pointer  
5. **Exit Program**

---

## Performance Metric

Execution time is measured using:
```c
#include <time.h>
clock_t start, finish;
start = clock();
/* operation here */
finish = clock();
elapsed = finish - start;
```

- The variable `elapsed` holds the total CPU clock ticks consumed.
- To compare real-time durations, divide by `CLOCKS_PER_SEC`.

---

## Objective

- Measure **clock-level performance** of stack operations.
- Compare theoretical **Big O** complexity with empirical results.
- Demonstrate the use of `clock()` for performance profiling in C.

---

## Example

| Number of Elements | Push (clocks) | Pop (clocks) | Print (clocks) |
|--------------------|---------------|---------------|----------------|
| 100                | 105           | 90            | 80             |
| 1,000              | 860           | 780           | 700            |
| 10,000             | 8500          | 7900          | 7400           |

*(Example data for illustration purposes only.)*
