#include <stdio.h>
int main()
{
  char letra;

  printf("Digite uma letra: ");
  letra = getchar();

  printf("Você digitou a letra: %c\n", letra);

  return 0;
}