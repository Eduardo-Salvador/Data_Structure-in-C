<div align="center">

# Pilhas: Estáticas e Dinâmicas

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

Explicação de estruturas LIFO (Last-In, First-Out), gerenciamento de memória e manipulação de pilhas via ponteiros.

---

### Visão Geral

</div>

  - **Princípio LIFO:** A regra fundamental de uma Pilha é **Last-In, First-Out**. O último elemento a entrar é o primeiro a sair, como uma pilha de pratos.
  - **Pilhas Estáticas (Sequenciais):** Implementadas usando arrays com um índice `top` (topo). Rápidas e estáveis, mas limitadas pelo `MAX_SIZE`.
  - **Pilhas Dinâmicas (Encadeadas):** Elementos são alocados no heap. O ponteiro `top` sempre aponta para o último nó inserido, e cada nó aponta para o elemento abaixo dele.
  - **Aplicações:** Gerenciamento de chamadas de função (Call Stack), operações de desfazer/refazer (undo/redo) e análise de expressões.

-----

<div align="center">

### Comparação de Complexidade

| Operação | Pilha Estática (Sequencial) | Pilha Dinâmica (Encadeada) |
| :--- | :--- | :--- |
| **Push (Inserir)** | $O(1)$ | $O(1)$ |
| **Pop (Remover)** | $O(1)$ | $O(1)$ |
| **Peek (Topo)** | $O(1)$ | $O(1)$ |
| **Busca** | $O(n)$ | $O(n)$ |
| **Overhead de Memória** | Baixo (apenas dados) | Alto (dados + ponteiros) |

-----

### Métodos Principais

</div>

  * `push()`: Adiciona um elemento ao topo da pilha.
  * `pop()`: Remove e retorna o elemento do topo.
  * `peek()`: Retorna o elemento do topo sem removê-lo.
  * `isEmpty()`: Verifica se a pilha está vazia.
  * `size()`: Retorna a contagem total de elementos na pilha.

\</div\>

-----