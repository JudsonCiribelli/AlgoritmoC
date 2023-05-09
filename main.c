#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  /*1. Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence,
  considerando só os seguintes valores:
  61 - Brasília
  71 - Salvador
  11 até 20 - São Paulo
  27 - Vitória
  31 - Belo Horizonte
  98 e 99: Maranhão
  qualquer outro: DDD desconhecido*/
  setlocale(LC_ALL, "Portuguese");
  int ddd;

  printf("Bem-vindo ao programa!! \n");
  printf("Digite o DDD em que deseja fazer a verificação: \n");
  scanf("%d", &ddd);

  switch (ddd)
  {
  case 61:
    printf("DDD pertencente a cidade de Brasilia\n");
    break;
  case 71:
    printf("DDD pertencente a cidade de Salvador\n");
    break;
  case 27:
    printf("DDD pertencente a cidade de Vitoria\n");
    break;
  case 31:
    printf("DDD pertencente a cidade de Belo Horizonte\n");
    break;
  case 98:
  case 99:
    printf("DDD pertencente a cidade do Maranhão\n");
    break;
  default:
    if (ddd >= 11 && ddd <= 20)
    {
      printf("DDD pertencente a cidade de São Paulo \n");
    }
    else
    {
      printf("DDD desconhecido \n");
    }
    break;
  }
  system("pause");
  return 0;
}
