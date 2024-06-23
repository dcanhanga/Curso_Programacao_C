# Criando Variáveis e Lendo Números Inteiros com `scanf`

## Conteúdo

1. Declaração de Variáveis
2. Função `scanf` para Inteiros
3. Exemplo Completo

### Declaração de Variáveis

Variáveis em C são utilizadas para armazenar dados. Cada variável deve ser declarada com um tipo específico de dado.

#### Exemplos de Declaração:

```c
int idade;  // Declara uma variável do tipo inteiro para armazenar a idade
```
### Função `scanf` para Inteiros

A função `scanf` é utilizada para ler dados de entrada do usuário. Para ler números inteiros, utilizamos o especificador de formato `%d`.

#### Exemplo:

```c
int idade;  // Declaração da variável idade
printf("Digite sua idade: ");
scanf("%d", &idade);  // Lê um número inteiro e armazena na variável idade
```
- `scanf("%d", &idade);`: Função de entrada que lê um número inteiro e armazena na variável `idade`.
- `%d`: Especificador de formato para números inteiros.
- `&idade`: Operador de endereço usado para indicar onde o valor lido deve ser armazenado.

### Exemplo Completo

Vamos ver um exemplo completo que declara uma variável, solicita ao usuário que insira um número inteiro, e depois imprime esse número na tela:

```c
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero;  // Declaração da variável numero
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);  // Lê um número inteiro e armazena na variável numero
    printf("Você digitou o número: %d\n", numero);  // Imprime o número digitado pelo usuário
    return 0;  // Indica que o programa terminou com sucesso
}
```
### Explicação do Exemplo:
1. Incluímos a biblioteca `stdio.h`.
2. Declaramos a variável `numero` do tipo `int`.
3. Usamos `printf` para solicitar ao usuário que digite um número inteiro.
4. Utilizamos `scanf` para ler o número inteiro digitado pelo usuário e armazená-lo na variável `numero`.
5. Usamos `printf` para imprimir o número armazenado na variável `numero`.
6. Retornamos `0` para indicar que o programa terminou com sucesso.

