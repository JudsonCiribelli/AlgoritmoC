#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Leia um número inteiro e escreva se ele é primo.
 */

int main()
{
  int num, i, cont;
  cont = 0;

  printf("DIGITE UM NÚMERO: ");
  scanf("%d", &num);

  if (num == 0 && num == 1)
  {
    printf("O número %d não e primo \n", num);
  }
  else
  {
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        cont = 1;
        break;
      }
    }
    if (cont == 0)
    {
      printf("o numero é primo\n");
    }
    else
    {
      printf("o numero não é primo \n");
    }
  }
  system("pause");
  return 0;
}
