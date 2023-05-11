#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6. Leia um número inteiro e positivo e escreva o seu fatorial. Considere: N! = 1 x 2 x 3 x ... x N-1 x N e 0 ! = 1*/

int main()
{
  int num, i, cont;
  cont = 0;
  int fatorial;
  fatorial = 1;

  printf("DIGITE UM NUMERO PARA SABER QUAL O SEU FATORIAL: ");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("O NUMERO E NEGATIVO, PORTANTO NAO PODEREI SEGUIR COM O PROGRAMA!!!!!!!! \n");
  }
  else
  {
    for (i = 1; i <= num; ++i)
    {
      fatorial *= i;
    }
    printf("O FATORIAL de %d E IGUAL A %d \nOBRIGADO POR PARTICIPAR, ENCERRANDO PROGRAMA!!!\n", num, fatorial);
  }

  system("pause");
  return 0;
}
