<div align="center">

# Filas: Estáticas e Dinâmicas:

![Brazil](https://img.shields.io/badge/🇧🇷-Português-green)

Explicação de estruturas FIFO (First-In, First-Out), gerenciamento de memória sequencial vs. encadeada e manipulação de ponteiros.

---

### Visão Geral:

</div>

  - **Princípio FIFO:** A regra fundamental de uma Fila é **First-In, First-Out**. O primeiro elemento a entrar é o primeiro a sair, assim como uma fila comum no mundo real.
  - **Filas Estáticas (Sequenciais):** Construídas usando arrays de tamanho fixo (`MAX_SIZE`). São rápidas, mas podem sofrer "overflow" se o limite for atingido. Neste projeto, implementamos deslocamentos (shifts) para manter o início no índice 0.
  - **Filas Dinâmicas (Encadeadas):** Elementos (Nós) são alocados em tempo de execução via `malloc()`. Utilizam ponteiros `start` (início) e `end` (fim) para permitir inserções e remoções $O(1)$ sem limite de tamanho.
  - **Manipulação de Structs:** Inclui implementações para tipos básicos (`int`, `float`) e dados complexos como a struct `People` (Nome, Idade, Gênero).

-----

<div align="center">

### Comparação de Complexidade:

| Operação | Fila Estática (Sequencial) | Fila Dinâmica (Encadeada) |
| :--- | :--- | :--- |
| **Enqueue (Inserir)** | $O(1)$ | $O(1)$ |
| **Dequeue (Remover)** | $O(n)$ (exige shift) | $O(1)$ |
| **Peek (Início)** | $O(1)$ | $O(1)$ |
| **Busca** | $O(n)$ | $O(n)$ |
| **Overhead de Memória** | Baixo (apenas dados) | Alto (dados + ponteiros) |

-----

### Métodos Principais:

</div>

  * `enqueue()`: Adiciona um elemento ao final da fila.
  * `dequeue()`: Remove e retorna o elemento do início.
  * `peek()`: Observa o elemento do início sem removê-lo.
  * `list()`: Percorre a fila para imprimir todos os elementos.
  * `clear()`: Limpa todos os dados e reseta a estrutura.