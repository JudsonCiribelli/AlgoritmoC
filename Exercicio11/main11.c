#include <stdio.h>
#include <stdlib.h>

/*O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer um
programa para obter todos os números de 4 algarismos com a mesma característica do número
3025*/

int main()
{

  for (int num = 1000; num <= 9999; num++)
  {
    int primeiroDigito = num / 100;
    int segundoDigito = num % 100;

    if ((primeiroDigito + segundoDigito) * (primeiroDigito + segundoDigito) == num)
    {
      printf("%d\n", num);
    }
  }

  system("pause");
  return 0;
}
