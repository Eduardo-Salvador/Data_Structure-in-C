<div align="center">

# Listas: Estáticas e Dinâmicas

![USA](https://img.shields.io/badge/🇺🇸-English-blue)

Explicação das estruturas de listas lineares, gerenciamento de memória (estática vs. dinâmica) e manipulação de ponteiros.

-----

### Visão Geral:

</div>

**Listas Estáticas (Sequenciais):** Utilizam um bloco contíguo de memória. São rápidas para acesso, mas rígidas em tamanho. Inserir um elemento no meio requer um "deslocamento" de todos os elementos subsequentes.

**Listas Dinâmicas (Encadeadas):** Os elementos (nós) são dispersos na memória e conectados por ponteiros. Crescem conforme necessário usando malloc() e free().

**Listas Circulares (Dinâmicas):** Uma variação onde o último nó aponta de volta para o início em vez de NULL, permitindo travessia infinita e fechando o loop.

**Gerenciamento Manual:** Diferentemente do coletor de lixo do Java, aqui controlamos manualmente o ciclo de vida de cada nó para evitar vazamentos de memória.

**Ponteiros são a Chave:** Em listas dinâmicas, cada nó armazena os dados e o endereço (*next) do próximo elemento.

-----

<div align="center">

### Comparação de Complexidade:

| Operação | Lista Estática (Sequencial) | Lista Dinâmica (Encadeada) | Lista Circular Dinâmica |
| :--- | :--- | :--- | :--- |
| **Acesso (Índice)** | O(1) | O(n) | O(n) |
| **Inserção/Exclusão (Início)** | O(n) | O(1) | O(n) (requer busca na cauda) |
| **Inserção/Exclusão (Fim)** | O(1) | O(n) | O(n) |
| **Busca** | O(n) | O(n) | O(n) |
| **Sobrecarga de Memória** | Baixa (somente dados) | Alta (dados + ponteiros) | Alta (dados + ponteiros) |

> **Observação:** A inserção no final pode ser O(1) se a lista mantiver um ponteiro para a cauda.

-----

### Métodos Principais (Lists):

Operações comuns implementadas tanto para estruturas Estáticas quanto Dinâmicas:

</div>

  * **`inserir_fim(Dado)` / `inserir_inicio(Dado)`**: Adiciona um novo elemento no final ou no início.
  * **`inserir_pos(Dado, indice)`**: Insere um dado em uma posição lógica específica.
  * **`remover_pos(indice)`**: Remove o elemento localizado no índice informado.
  * **`remover_valor(valor)`**: Busca e remove um valor específico da lista.
  * **`buscar(valor)`**: Retorna a posição/nó de um elemento específico ($O(n)$).
  * **`listar()`**: Percorre a estrutura para exibir todos os dados armazenados.

-----