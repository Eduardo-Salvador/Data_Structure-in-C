# Data Structures Project

## Overview

This project focuses on **implementing stacks and queues using static memory (predefined fixed-size arrays)**.  
All implementations use **arrays with fixed size**.  
No dynamic memory allocation was used; all memory is **static**.

---

## First Structure: **Stacks**

### Why Stacks?
- Controlled access to the **top** element.  
- Maintains **execution order**.  
- Simplifies **memory management** and **recursion handling**.

### Stack Operations

| Operation      | Description                                   |
|----------------|-----------------------------------------------|
| `push`         | Adds an element at the top                     |
| `pop`          | Removes the element from the top              |
| `peek` / `top` | Returns the top element without removing it  |
| `isEmpty`      | Checks if the stack is empty                  |
| `isFull`       | Checks if the stack has reached maximum size |
| `size`         | Returns the number of elements in the stack   |

All stacks in this project use **fixed arrays (static memory)**.

---

## Second Structure: **Queues**

### Why Queues?
- Access elements in **first-in, first-out (FIFO)** order.  
- Useful for **task scheduling**, **message processing**, and **resource management**.

### Queue Operations

| Operation   | Description                         |
|-------------|-------------------------------------|
| `enqueue`   | Adds an element at the rear         |
| `dequeue`   | Removes an element from the front   |
| `peek` / `front` | Returns the front element        |
| `isEmpty`   | Checks if the queue is empty        |
| `isFull`    | Checks if the queue is full         |
| `list`    | View all queue items       |
| `size`    | View queue size      |

### Queue Implementations in This Project

- **Without pointers/indices**:  
  Uses a fixed-size array. Elements are shifted when removing from the front.

- **With pointers/indices**:  
  Uses a fixed-size array. Front and rear positions are tracked, allowing easier manipulation and optional circular behavior.

> Both queue implementations use **static memory**, the difference is only in **how the positions are managed**.

---
