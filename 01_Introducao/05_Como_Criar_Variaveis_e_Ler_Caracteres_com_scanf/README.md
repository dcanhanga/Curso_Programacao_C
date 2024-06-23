# Criando Variáveis e Lendo Caracteres com `scanf`

## Conteúdo

1. Declaração de Variáveis para Caracteres
2. Função `scanf` para Caracteres
3. Exemplo Completo

### Declaração de Variáveis para Caracteres

Em C, os caracteres são representados pelo tipo de dado `char`. Cada variável do tipo `char` armazena um único caractere.

#### Exemplo de Declaração:

```c
char letra;  // Declara uma variável do tipo caractere para armazenar uma letra
```

- `char`: Tipo de dado para um único caractere.

### Função `scanf` para Caracteres

Para ler caracteres do usuário, utilizamos o especificador de formato `%c` dentro da função `scanf`.

#### Exemplo:

```c
char letra;  // Declaração da variável letra
printf("Digite uma letra: ");
scanf(" %c", &letra);  // Lê um caractere e armazena na variável letra
```

- `scanf(" %c", &letra);`: Função de entrada que lê um caractere e armazena na variável `letra`.
- `%c`: Especificador de formato para caracteres.
- `&letra`: Operador de endereço usado para indicar onde o valor lido deve ser armazenado.

### Exemplo Completo

Vamos ver um exemplo completo que declara uma variável para um caractere, solicita ao usuário que insira um caractere, e depois imprime esse caractere na tela:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    char letra;  // Declaração da variável letra

    // Solicita ao usuário que insira uma letra
    printf("Digite uma letra: ");
    scanf(" %c", &letra);  // Lê uma letra e armazena na variável letra

    // Imprime a letra digitada pelo usuário
    printf("Você digitou a letra: %c\n", letra);

    return 0;  // Indica que o programa terminou com sucesso
}
```

### Explicação do Exemplo:

1. Incluímos a biblioteca `stdio.h`.
2. Declaramos a variável `letra` do tipo `char`.
3. Usamos `printf` para solicitar ao usuário que digite uma letra.
4. Utilizamos `scanf` para ler a letra digitada pelo usuário e armazená-la na variável `letra`.
5. Usamos `printf` para imprimir a letra armazenada na variável `letra`.
6. Retornamos `0` para indicar que o programa terminou com sucesso.

