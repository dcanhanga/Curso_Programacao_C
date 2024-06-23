# Aula: Estrutura de um Programa em C

## Objetivo

Entender a estrutura básica de um programa em C e os componentes essenciais que compõem um programa funcional.

## 1. Incluindo Bibliotecas

Em C, bibliotecas fornecem funções prontas para realizar tarefas comuns, como entrada e saída de dados.

### Exemplo:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
```

- `#include <stdio.h>`: Esta linha inclui a biblioteca padrão de entrada e saída, necessária para usar funções como `printf` e `scanf`.

---

## 2. Função Principal `main`

Todo programa em C começa pela execução da função `main`.

### Estrutura da Função `main`:

```c
int main() {
    // Corpo do programa
    return 0;
}
```
- `int main()`: Declara a função principal do programa.
- `{ ... }`: As chaves delimitam o bloco de código que pertence à função `main`.
- `return 0;`: Indica que o programa terminou com sucesso.
