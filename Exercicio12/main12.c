#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa para mostrar os 100 primeiros termos da série de Fibonacci.*/
int main()
{

  int termos = 100;
  unsigned long long int primeiroTermo = 0;
  unsigned long long int segundoTermo = 1;

  printf("Os %d primeiros termos da série de Fibonacci:\n", termos);
  printf("%llu\n", primeiroTermo);
  printf("%llu\n", segundoTermo);

  for (int i = 3; i <= termos; i++)
  {
    unsigned long long int proximoTermo = primeiroTermo + segundoTermo;
    printf("%llu\n", proximoTermo);
    primeiroTermo = segundoTermo;
    segundoTermo = proximoTermo;
  }
  system("pause");
  return 0;
}
