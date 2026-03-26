<div align="center">

[![Generic badge](https://img.shields.io/badge/STATUS-FINISHED-<COLOR>.svg)](https://shields.io/) [![Ask Me Anything !](https://img.shields.io/badge/Ask%20me-anything-1abc9c.svg)](https://github.com/Eduardo-Salvador)

-----

# Quick Navigation

#### [Overview](#data-structure-and-algorithms-in-c)

#### [Technologies](#technologies-1)

#### [Memory Allocation](#memory-allocation--alocação-de-memória)

#### [Linear Structures](#linear-structures--estruturas-lineares)

#### [Low-Level & Pointers](#low-level--pointers-1)

#### [Future Roadmap](#future-roadmap-1)

-----

# Data Structure and Algorithms in C

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

A study project focused on understanding **low-level mechanics**, **memory management (Static & Dynamic)**, and **pointer manipulation** in C. This repository serves as the foundation for computational efficiency.

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

Um projeto de estudo focado em entender **mecânica de baixo nível**, **gerenciamento de memória (Estática e Dinâmica)** e **manipulação de ponteiros** em C. Este repositório serve como base para eficiência computacional.

-----

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

This project covers the fundamental implementation of structures using C:

**Static Structures (Fixed Arrays)  
Dynamic Structures (Linked Lists / `malloc`)  
Pointer Manipulation & Structs  
Performance Measurement (Clock)  
Unit Testing (Green/Red results logic)**

-----

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

Este projeto cobre a implementação fundamental de estruturas usando C:

**Estruturas Estáticas (Arrays Fixos)  
Estruturas Dinâmicas (Listas Ligadas / `malloc`)  
Manipulação de Ponteiros e Structs  
Medição de Performance (Clock)  
Testes Unitários (Lógica de resultados Green/Red)**

-----

### Technologies

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

---

### Memory Allocation | Alocação de Memória

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

### 1. Static Allocation (Sequential)

</div>

  - **Concept:** Memory is allocated at compile time.
  - **In this project:** Uses fixed-size arrays (`MAX_SIZE 10`). Elements are stored in contiguous memory blocks.
  - **Trade-off:** Fast access, but requires shifting elements during insertion/deletion ($O(n)$) and has a size limit.

<div align="center">

### 2. Dynamic Allocation (Linked)

</div>

  - **Concept:** Memory is allocated at runtime using `malloc()` and released with `free()`.
  - **In this project:** Uses **Nodes** and **Pointers**. Each element points to the next location in memory.
  - **Trade-off:** Flexible size and efficient insertions/deletions at the head, but requires more memory (for pointers) and lacks random access.

-----

<div align="center">

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

### 1. Alocação Estática (Sequencial)

</div>

  - **Conceito:** A memória é alocada em tempo de compilação.
  - **Neste projeto:** Utiliza arrays de tamanho fixo (`MAX_SIZE 10`). Os elementos são armazenados em blocos de memória contíguos.
  - **Troca (Trade-off):** Acesso rápido, mas requer o deslocamento (shift) de elementos durante a inserção/remoção ($O(n)$) e possui um limite de tamanho.

<div align="center">

### 2. Alocação Dinâmica (Encadeada)

</div>

  - **Conceito:** A memória é alocada em tempo de execução usando `malloc()` e liberada com `free()`.
  - **Neste projeto:** Utiliza **Nós (Nodes)** e **Ponteiros**. Cada elemento aponta para o próximo endereço na memória.
  - **Troca (Trade-off):** Tamanho flexível e inserções/remoções eficientes no início, mas requer mais memória (para os ponteiros) e não permite acesso aleatório direto.

-----

<div align="center">

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

### Linear Structures | Estruturas Lineares

### Static Lists (Sequential Memory)

Implementations using fixed arrays for different data types:

</div>

  * **Integers & Doubles:** Basic manipulation and shift logic.
  * **Structs (Films):** Managing complex data in sequential blocks.
  * **Optimization:** Includes functions to remove elements larger than a threshold and filtering odd numbers.

<div align="center">

### Dynamic Lists (Linked Memory)

Implementations using heap allocation:

</div>

  * **Dynamic Nodes:** Usage of `malloc` to create flexible lists.
  * **Data Types:** Examples with `float`, `int`, and `Contact` structs (Name, Surname, Last Conversation).
  * **Math Operations:** Functions like `average()` traversing the dynamic list.

<div align="center">

  **[Click here to read more details in English](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Lists/README.md)**

---

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

### Listas Estáticas (Memória Sequencial)

Implementações usando arrays fixos para diferentes tipos de dados:

</div>

  * **Inteiros & Doubles:** Manipulação básica e lógica de deslocamento (shift).
  * **Structs (Filmes):** Gerenciamento de dados complexos em blocos sequenciais.
  * **Otimização:** Inclui funções para remover elementos maiores que um limite e filtragem de números ímpares.

<div align="center">

### Listas Dinâmicas (Memória Encadeada)

Implementações usando alocação no heap:

</div>

  * **Nós Dinâmicos:** Uso de `malloc` para criar listas flexíveis.
  * **Tipos de Dados:** Exemplos com `float`, `int` e structs de `Contato` (Nome, Sobrenome, Última Conversa).
  * **Operações Matemáticas:** Funções como `media()` percorrendo a lista dinâmica.

<div align="center">

  **[Click here to read more details in Brazilian Portuguese](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Lists/README_PT-BR.md)**

-----

### Queues | Filas

### Queues (FIFO):

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Implementations focused on "First-In, First-Out" logic:

</div>

  * **Static Queue:** Sequential memory using arrays with shift logic or circular management.
  * **Dynamic Queue:** Linked nodes with `start` and `end` pointers for $O(1)$ efficiency.
  * **Real World:** Simulation of service lines and data buffers.

<div align="center">

  **[Click here to read more details in English](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Queues/README.md)**

---

### Filas (FIFO):

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

Implementações focadas na lógica "Primeiro a Entrar, Primeiro a Sair":

</div>

  * **Fila Estática:** Memória sequencial usando arrays com lógica de deslocamento ou circular.
  * **Fila Dinâmica:** Nós encadeados com ponteiros `inicio` e `fim` para eficiência $O(1)$.
  * **Mundo Real:** Simulação de filas de atendimento e buffers de dados.

<div align="center">

  **[Click here to read more details in Brazilian Portuguese](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Queues/README_PT-BR.md)**

---

### Stacks | Pilhas

### Stacks (LIFO):

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Implementations focused on "Last-In, First-Out" logic:

</div>

  * **Static Stack:** Array-based with a `top` index controller.
  * **Dynamic Stack:** Pointer-based where the last element pushed is the first one popped.
  * **Memory mechanics:** Understanding how the Call Stack works in low-level execution.

<div align="center">

  **[Click here to read more details in English](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Stacks/README.md)**

---

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

### Pilhas (LIFO):

Implementações focadas na lógica "Último a Entrar, Primeiro a Sair":

</div>

  * **Pilha Estática:** Baseada em array com um controlador de índice `topo`.
  * **Pilha Dinâmica:** Baseada em ponteiros onde o último elemento inserido é o primeiro removido.
  * **Mecânica de Memória:** Entendendo como a Call Stack funciona na execução de baixo nível.

<div align="center">

  **[Click here to read more details in Brazilian Portuguese](https://github.com/Eduardo-Salvador/Data_Structure-in-C/tree/main/Stacks/README_PT-BR.md)**

---

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

### Low-Level & Pointers

The core goal of this repository is to master how data moves in memory:

</div>

  * **Pass-by-reference:** Using `List *l` to modify the structure directly.
  * **Memory Release:** Ensuring no memory leaks by using `free(toRemove)`.
  * **Struct Nesting:** Handling pointers to structs inside other structs (e.g., `Node->Contact*`).

-----

<div align="center">

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

### Baixo Nível & Ponteiros

O objetivo central deste repositório é dominar como os dados se movem na memória:

</div>

  * **Passagem por referência:** Uso de `List *l` para modificar a estrutura diretamente.
  * **Liberação de Memória:** Garantia de que não existam vazamentos de memória (memory leaks) usando `free(aux)`.
  * **Aninhamento de Structs:** Manipulação de ponteiros para structs dentro de outras structs (ex: `Node->Contato*`).

-----

<div align="center">

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

### Future Roadmap

After mastering pointers and manual memory management in C, the project transitions to **Advanced Non-Linear Structures** (Trees, Graphs, Hash Maps) and **High-Level Abstractions** in Java.

> **Note:** The Java portion of this study can be found here: **[Data Structure in Java](https://github.com/Eduardo-Salvador/Data_Structure-in-Java)**

-----

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

### Roadmap Futuro 

Após dominar ponteiros e gerenciamento manual de memória em C, o projeto transiciona para **Estruturas Não-Lineares Avançadas** (Árvores, Grafos, Hash Maps) e **Abstrações de Alto Nível** em Java.

> **Nota:** A parte de Java deste estudo pode ser encontrada aqui: **[Data Structure in Java](https://github.com/Eduardo-Salvador/Data_Structure-in-Java)**

---
