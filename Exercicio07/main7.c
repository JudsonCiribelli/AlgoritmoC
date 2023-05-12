#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o
"número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou
menor que o número mágico e contar o número de tentativas. Quando o usuário conseguir acertar
o número o programa deverá classificar o usuário como: a. De 1 a 3 tentativas: muito sortudo b.
De 4 a 6 tentativas: sortudo c. De 7 a 10 tentativas: normal d. > 10 tentativas: tente novamente*/

void tentativas(int numTentativas)
{
  if (numTentativas >= 1 && numTentativas <= 3)
  {
    printf("VOCE É MUITO SORTUDO");
  }
  else if (numTentativas >= 4 && numTentativas <= 6)
  {
    printf("VOCE É SORTUDO ");
  }
  else if (numTentativas >= 7 && numTentativas <= 10)
  {
    printf("VOCE ESTÁ NA MÉDIA");
  }
  else
  {
    printf("TENTE NOVAMENTE!!!");
  }
}
int main()
{

  srand(time(0));

  int numMagico = rand() % 500;
  int tentativa, numTentativas;
  numTentativas = 0;
  int acerto;
  acerto = 0;

  printf("BEM-VINDO AO PROGRAMA DO NÚMERO MAGICO \n");
  while (!acerto)
  {
    printf("DIGITE UM NÚMERO ENTRE 0 E 500\n");
    scanf("%d", &tentativa);
    numTentativas++;

    if (tentativa < numMagico)
    {
      printf("TENTATIDA %d: O NÚMERO MAGICO É MAIOR QUE %d. \n", numTentativas, tentativa);
    }
    else if (tentativa > numMagico)
    {
      printf("TENTATIVA %d: O NÚMERO MAGICO É MENOR QUE %d. \n", numTentativas, tentativa);
    }
    else
    {
      printf("PARABÉNS!! VOCE ACERTOU O NÚMERO MAGICO %d TENTATIVAS. \n", numTentativas);
    }
  }
  tentativas(numTentativas);
  system("pause");
  return 0;
}
