#include <stdio.h>
#include <stdlib.h>

/*2. Faça um programa usando vetores que:
o Preencha um vetor de inteiros com 20 posições.
o Imprima o maior elemento do vetor e apresente-o.
o Imprima o menor elemento do vetor e apresente-o.
o Imprima a soma entre os elementos do vetor.
o Imprima a média aritmética entre os elementos do vetor*/

int main()
{

  int v[20];
  int i;
  int maior, menor, soma;
  float media;
  soma = 0;

  printf("DIGITE 20 NUMEROS INTEIROS: \n");
  for (i = 0; i < 20; i++)
  {
    printf("DIGITE O NUMERO %d ", i + 1);
    scanf("%d", &v[i]);
  }

  maior = v[0];
  menor = v[0];
  for (i = 0; i < 20; i++)
  {
    if (v[i] > maior)
    {
      maior = v[i];
    }
    if (v[i] < menor)
    {
      menor = v[i];
    }
  }
  for (i = 0; i < 20; i++)
  {
    soma += v[i];
  }
  media = (float)soma / 20;
  printf("O Maior elemento: %d\n", maior);
  printf("O Menor elemento: %d\n", menor);
  printf("A Soma dos elementos: %d\n", soma);
  printf("A Média aritmética: %.2f\n", media);

  system("pause");
  return 0;
}
