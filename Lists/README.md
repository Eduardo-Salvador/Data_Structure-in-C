<div align="center">

# Lists: Static & Dynamic

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Explanation of Linear List structures, memory management (Static vs Dynamic), and pointer manipulation.

-----

### Overview:
**Static Lists (Sequential):** Use a contiguous block of memory. They are fast for access but rigid in size. Inserting in the middle requires a "shift" of all subsequent elements.

**Dynamic Lists (Linked):** Elements (Nodes) are scattered in memory and connected by pointers. They grow as needed using malloc() and free().

**Circular Lists (Dynamic):** A variation where the last node points back to the head instead of NULL, allowing infinite traversal and closing the loop.

**Manual Management:** Unlike Java's Garbage Collector, here we manually control the lifecycle of each node to prevent memory leaks.

**Pointers are Key:** In dynamic lists, each node stores the data and the address (*next) of the next element.

-----

### Complexity Comparison:

| Operation | Static List (Sequential) | Dynamic List (Linked) | Dynamic Circular |
| :--- | :--- | :--- | :--- |
| **Access (Index)** | $O(1)$ | $O(n)$ | $O(n)$ |
| **Insert/Delete (Start)** | $O(n)$ | $O(1)$ | $O(n)$ (requires tail search) |
| **Insert/Delete (End)** | $O(1)$ | $O(n)$ | $O(n)$ |
| **Search** | $O(n)$ | $O(n)$ | $O(n)$ |
| **Memory Overhead** | Low (data only) | High (data + pointers) | High (data + pointers) |

> **Note:** Insertion at the end can be $O(1)$ if the list maintains a `tail` pointer.

-----

Calma, bicho, respire\! Entendi agora. Você quer uma seção **exclusiva** de `Main Methods` para as **Listas** (Static & Dynamic), logo abaixo de onde elas são explicadas no seu README principal, seguindo o padrão visual de blocos que você já tem.

Aqui está o bloco para as Listas:

-----

### Main Methods:

Common operations implemented across all linear list structures:

</div>

  * `insert_front() / insert_back()`: Adds elements at specific positions.
insertAt(Data, index): Inserts data at a specific logical position.
  * `removeAt(index)`: Removes the element located at the given index.
  * `removeAt(value)`: Searches and removes a specific value from the list.
  * `search()`: Finds the position of a specific element ($O(n)$).
  * `list()`: Iterates through the entire structure to display data.
  * `clear()`: Deallocates memory (Dynamic) or resets the counter (Static).

---