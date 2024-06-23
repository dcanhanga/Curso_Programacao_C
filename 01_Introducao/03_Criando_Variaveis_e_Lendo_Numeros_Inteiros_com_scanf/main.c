#include <stdio.h>
int main()
{
  int numero; // Declaração da variável numero
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);                          // Lê um número inteiro e armazena na variável numero
  printf("Você digitou o número: %d\n", numero); // Imprime o número digitado pelo usuário
  return 0;                                      // Indica que o programa terminou com sucesso
}