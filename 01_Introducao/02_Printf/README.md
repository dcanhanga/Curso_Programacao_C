# Imprimindo informações com a função printf

## Conteúdo

1. Função `printf`
2. Especificadores de Formato
3. Caracteres de Controle
4. Exemplo Completo
5. Retorno da Função `printf`

### Função `printf`

A função `printf` é usada para imprimir texto e valores na tela.

#### Exemplo:

```c
printf("Olá, Mundo!\n");  // Imprime "Olá, Mundo!" seguido de uma nova linha
```

- `printf`: Função de saída que imprime texto no console.

### Especificadores de Formato

Especificadores de formato são usados dentro da função `printf` para indicar o tipo de dados a serem impressos.

#### Exemplos Comuns:
- `%d`: Inteiros
- `%f`: Números de ponto flutuante
- `%c`: Caracteres
- `%s`: Strings (cadeias de caracteres)

#### Exemplo:

```c
int idade = 30;
printf("Você tem %d anos.\n", idade);  // Imprime a idade do usuário
```

### Caracteres de Controle

Caracteres de controle são usados para formatar a saída.

#### Exemplos Comuns:
- `\n`: Nova linha
- `\t`: Tabulação

#### Exemplo:

```c
printf("Linha 1\nLinha 2\n");  // Imprime duas linhas
```

### Exemplo Completo

Vamos ver um exemplo completo que utiliza `printf` com especificadores de formato e caracteres de controle:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    printf("Olá, Mundo!\n");  // Imprime "Olá, Mundo!" seguido de uma nova linha
    int idade = 30;
    printf("Você tem %d anos.\n", idade);  // Imprime a idade do usuário
    printf("Tabulação:\tAqui!\n");  // Exemplo de tabulação
    return 0;  // Indica que o programa terminou com sucesso
}

### Retorno da Função `printf`

A função `printf` retorna um valor inteiro que indica o número de caracteres que foram impressos na tela.

#### Exemplo:

```c
int caracteres_impressos = printf("Olá, Mundo!\n");
printf("Número de caracteres impressos: %d\n", caracteres_impressos);
```

- `caracteres_impressos`: Variável que armazena o número de caracteres impressos pela função `printf`.
