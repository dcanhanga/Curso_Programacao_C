#include <stdio.h>

int main()
{
  float altura;
  double peso;

  printf("Digite sua altura em metros: ");
  scanf("%f", &altura);

  printf("Digite seu peso em quilogramas: ");
  scanf("%lf", &peso);

  printf("Você tem %.2f metros de altura e pesa %.2lf quilogramas.\n", altura, peso);

  return 0;
}