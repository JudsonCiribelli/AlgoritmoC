#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Fazer um algoritmo que leia três valores e identifique qual o maior valor informado.*/

int main()
{

  setlocale(LC_ALL, "Portuguese");

  int n1, n2, n3;
  printf("Digite os tres numeros: \n ");
  scanf("%d%d%d", &n1, &n2, &n3);
  if (n1 > n2 && n1 > n3)
  {
    printf("O primeiro numero é maior \n");
  }
  else if (n2 > n1 && n2 > n3)
  {
    printf("O segundo número é maior \n");
  }
  else if (n3 > n1 && n3 > n2)
  {
    printf("O terceiro número é maior \n");
  }
  else
  {
    printf("Os números são iguais \n");
  }
  system("Pause");
  return 0;
}
