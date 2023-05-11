#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4. Utilize uma das estruturas condicionais de repetição para: Escreva quantos anos serão necessários para que
Ciclano seja maior que Fulano. Considere que Fulano tem 1,50 m e cresce 2 cm por ano e Ciclano tem 1,10 m
e cresce 3 cm por ano.*/

int main()
{

  float altura_ciclano;
  float altura_fulano;
  int anos = 0;

  altura_ciclano = 1.10;
  altura_fulano = 1.50;

  while (altura_ciclano <= altura_fulano)
  {
    altura_ciclano += 0.03;
    altura_fulano += 0.02;
    anos++;
  }
  printf("SERAO NECESSARIO %d ANOS PARA QUE CICLANO SEJA MAIOR QUE FULANO \n", anos);

  system("pause");
  return 0;
}
