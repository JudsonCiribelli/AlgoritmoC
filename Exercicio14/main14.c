#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa para receber dois números do usuário e calcular o seu MDC utilizando o
método de Euclides. O programa deve continuar pedindo dois números até que 0 e 0 sejam
fornecidos*/

int calcularMDC(int a, int b)
{
  // Algoritmo de Euclides para calcular o MDC
  while (b != 0)
  {
    int resto = a % b;
    a = b;
    b = resto;
  }
  return a;
}
int main()
{
  int numero1, numero2;

  do
  {
    printf("Digite dois numeros (ou 0 0 para sair): ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 != 0 || numero2 != 0)
    {
      int mdc = calcularMDC(numero1, numero2);
      printf("O MDC de %d e %d é: %d\n", numero1, numero2, mdc);
    }
  } while (numero1 != 0 || numero2 != 0);

  system("pause");
  return 0;
}
