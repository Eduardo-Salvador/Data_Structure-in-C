# Data Structures Project

## Overview

This project focuses on **implementing stacks, queues and lists using static memory (predefined fixed-size arrays)**.  
All implementations use **arrays with fixed size**.  
No dynamic memory allocation was used; all memory is **static**.

---

## First Structure: **Stacks**

### Why Stacks?
- Access elements in **last-in, first-out (LIFO)** order.  
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

## A performance meter was implemented in the Sequential Stack.
To see more about performance and bigO in Stacks, go to: 
https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Stacks/Linear%20and%20Simple%20(Static%20using%20fixed%20arrays)/Clock.Medition

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

## Third Structure: **Lists**

### Why Lists?

- Store multiple elements in **continuous memory.**
- Allow **random access** by index.
- Suitable when the **maximum size** is known in advance.

### List Operations

| Operation   | Description                         |
|-------------|-------------------------------------|
| `inicializeList`   | Creates and initializes a new empty list         |
| `push`   | Inserts an element at a specific position (shifts elements if needed)   |
| `pop` | Removes an element from a specific position (shifts elements to fill the gap)        |
| `printList`   | Prints all elements in the list        |
| `isFull`    | Checks if the queue is full          |
| `isEmpty`    | Checks if the queue is empty       |
| `size`    | View queue size        |
	
### List Implementations in This Project

- **Without pointers/indices:**
  Uses a fixed-size array. Elements are shifted to the right when inserting and to the left when removing.
  Positions are managed manually using a final index.
- **With pointers/indices:**
  Uses a fixed-size array. Keeps track of positions using explicit indices or pointers, allowing easier management of insertions and removals.
  Can optionally support more advanced behaviors like circular insertion.

> This list implementation uses **static memory**, allowing direct access by index but requiring element shifts for insertions and deletions.

---
