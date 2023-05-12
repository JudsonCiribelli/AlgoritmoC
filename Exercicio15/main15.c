#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa para encontrar todos os pares de números amigáveis entre 1 e 100000. Um
par de números é amigável quando cada um deles é igual à soma dos divisores do outro.*/
int calcularSomaDivisores(int num)
{
  int soma = 0;
  for (int i = 1; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      soma += i;
    }
  }
  return soma;
}

void encontrarParesAmigaveis(int inicio, int fim)
{
  for (int i = inicio; i <= fim; i++)
  {
    int somaDivisores1 = calcularSomaDivisores(i);
    int somaDivisores2 = calcularSomaDivisores(somaDivisores1);
    if (somaDivisores2 == i && i < somaDivisores1)
    {
      printf("Par amigavel: %d e %d\n", i, somaDivisores1);
    }
  }
}
int main()
{
  int inicio = 1;
  int fim = 1000;

  printf("Procurando pares amigaveis entre %d e %d:\n", inicio, fim);
  encontrarParesAmigaveis(inicio, fim);

  system("pause");
  return 0;
}
