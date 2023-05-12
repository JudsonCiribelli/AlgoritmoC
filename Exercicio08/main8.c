#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que lê um dado N valores, guarde em um vetor e imprima: a. maior valor b.
média dos valores c. os valores dispostos em ordem crescente d. sub conjunto de valores primos
que está contido no veto*/


int Primo(int num)
{
  if (num <= 1)
  {
    return 0;
  }
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

void Menor(int vetor[], int tamanho)
{
  for (int i = 0; i < tamanho - 1; i++)
  {
    for (int j = 0; j < tamanho - i - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int valores;
  printf("Digite os valores: ");
  scanf("%d", &valores);

  int vetor[valores];

  printf("Digite os %d valores:\n", valores);
  for (int i = 0; i < valores; i++)
  {
    scanf("%d", &vetor[i]);
  }

  // Maior valor
  int maiorValor = vetor[0];
  for (int i = 1; i < valores; i++)
  {
    if (vetor[i] > maiorValor)
    {
      maiorValor = vetor[i];
    }
  }
  printf("Maior valor: %d\n", maiorValor);

  // Média dos valores
  int soma = 0;
  for (int i = 0; i < valores; i++)
  {
    soma += vetor[i];
  }
  float media = (float)soma / valores;
  printf("Média dos valores: %.2f\n", media);

  // Valores em ordem crescente
  Menor(vetor, valores);
  printf("Valores em ordem crescente: ");
  for (int i = 0; i < valores; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  // Subconjunto de valores primos
  printf("Subconjunto de valores primos: ");
  for (int i = 0; i < valores; i++)
  {
    if (Primo(vetor[i]))
    {
      printf("%d ", vetor[i]);
    }
  }
  printf("\n");

  return 0;
}
