# Criando Variáveis e Lendo Caracteres com `getchar`

## Conteúdo

1. Declaração de Variáveis para Caracteres
2. Função `getchar` para Caracteres
3. Exemplo Completo

### Declaração de Variáveis para Caracteres

Em C, os caracteres são representados pelo tipo de dado `char`. Cada variável do tipo `char` armazena um único caractere.

#### Exemplo de Declaração:

```c
char letra;  // Declara uma variável do tipo caractere para armazenar uma letra
```

- `char`: Tipo de dado para um único caractere.

### Função `getchar` para Caracteres

A função `getchar` é utilizada para ler um caractere do usuário. Ela lê o próximo caractere disponível na entrada padrão (normalmente o teclado).

#### Exemplo:

```c
char letra;  // Declaração da variável letra
printf("Digite uma letra: ");
letra = getchar();  // Lê um caractere e armazena na variável letra
```

- `getchar()`: Função de entrada que lê um caractere da entrada padrão e retorna esse caractere como um valor do tipo `int` (que pode ser convertido para `char`).
- `letra`: Variável do tipo `char` onde o caractere lido será armazenado.

### Exemplo Completo

Vamos ver um exemplo completo que declara uma variável para um caractere, solicita ao usuário que insira um caractere usando `getchar`, e depois imprime esse caractere na tela:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    char letra;  // Declaração da variável letra

    // Solicita ao usuário que insira uma letra
    printf("Digite uma letra: ");
    letra = getchar();  // Lê uma letra e armazena na variável letra

    // Imprime a letra digitada pelo usuário
    printf("Você digitou a letra: %c\n", letra);

    return 0;  // Indica que o programa terminou com sucesso
}
```

### Explicação do Exemplo:

1. Incluímos a biblioteca `stdio.h`.
2. Declaramos a variável `letra` do tipo `char`.
3. Usamos `printf` para solicitar ao usuário que digite uma letra.
4. Utilizamos `getchar` para ler o caractere digitado pelo usuário e armazená-lo na variável `letra`.
5. Usamos `printf` para imprimir a letra armazenada na variável `letra`.
6. Retornamos `0` para indicar que o programa terminou com sucesso.
