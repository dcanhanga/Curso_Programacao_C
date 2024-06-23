# Criando Variáveis e Lendo Números Reais com `scanf`

## Conteúdo

1. Declaração de Variáveis para Números Reais
2. Função `scanf` para Números Reais
3. Exemplo Completo

### Declaração de Variáveis para Números Reais

Em C, os números reais são representados pelo tipo de dado `float` ou `double`. A escolha entre `float` e `double` depende da precisão necessária para os cálculos.

#### Exemplos de Declaração:

```c
float altura;  // Declara uma variável do tipo ponto flutuante para armazenar a altura
double peso;   // Declara uma variável do tipo duplo para armazenar o peso com maior precisão
```

- `float`: Tipo de dado para números de ponto flutuante de precisão simples.
- `double`: Tipo de dado para números de ponto flutuante de precisão dupla.

### Função `scanf` para Números Reais

Para ler números reais (ponto flutuante), utilizamos os especificadores de formato `%f` para `float` e `%lf` para `double` dentro da função `scanf`.

#### Exemplo para `float`:

```c
float altura;  // Declaração da variável altura
printf("Digite sua altura em metros: ");
scanf("%f", &altura);  // Lê um número real (float) e armazena na variável altura
```

- `scanf("%f", &altura);`: Função de entrada que lê um número real (float) e armazena na variável `altura`.
- `%f`: Especificador de formato para números de ponto flutuante (float).
- `&altura`: Operador de endereço usado para indicar onde o valor lido deve ser armazenado.

#### Exemplo para `double`:

```c
double peso;  // Declaração da variável peso
printf("Digite seu peso em quilogramas: ");
scanf("%lf", &peso);  // Lê um número real (double) e armazena na variável peso
```

- `scanf("%lf", &peso);`: Função de entrada que lê um número real (double) e armazena na variável `peso`.
- `%lf`: Especificador de formato para números de ponto flutuante de precisão dupla (double).
- `&peso`: Operador de endereço usado para indicar onde o valor lido deve ser armazenado.

### Exemplo Completo

Vamos ver um exemplo completo que declara variáveis para números reais, solicita ao usuário que insira valores para altura e peso, e depois imprime esses valores na tela:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    float altura;  // Declaração da variável altura
    double peso;   // Declaração da variável peso

    // Solicita ao usuário que insira a altura
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);  // Lê a altura e armazena na variável altura

    // Solicita ao usuário que insira o peso
    printf("Digite seu peso em quilogramas: ");
    scanf("%lf", &peso);  // Lê o peso e armazena na variável peso

    // Imprime os valores de altura e peso digitados pelo usuário
    printf("Você tem %.2f metros de altura e pesa %.2lf quilogramas.\n", altura, peso);

    return 0;  // Indica que o programa terminou com sucesso
}
```

### Explicação do Exemplo:

1. Incluímos a biblioteca `stdio.h`.
2. Declaramos as variáveis `altura` do tipo `float` e `peso` do tipo `double`.
3. Usamos `printf` para solicitar ao usuário que digite a altura e o peso.
4. Utilizamos `scanf` para ler os valores de altura e peso digitados pelo usuário e armazená-los nas variáveis correspondentes.
5. Usamos `printf` para imprimir os valores de altura e peso armazenados com duas casas decimais de precisão.
6. Retornamos `0` para indicar que o programa terminou com sucesso.

---

Este foi um resumo sobre como criar variáveis para números reais em C e como ler esses números utilizando a função `scanf`. Esses conceitos são essenciais para lidar com entrada de dados de ponto flutuante em programas escritos em C.
