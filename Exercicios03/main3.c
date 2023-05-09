#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*3. Fazer um algoritmo que leia o nome e a altura de três pessoas, determinando o nome e a altura da menor delas
que será apresentado ao usuário deste algoritmo.*/

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i;
  char nome[50], menor_nome[50];
  float altura, menor_altura = 1000.0;

  for (i = 1; i <= 3; i++)
  {
    printf("Digite o nome da pessoa: \n", i);
    scanf("%s", &nome);
    printf("Digite sua altura: \n", i);
    scanf("%f", &altura);
    if (altura < menor_altura)
    {
      menor_altura = altura;
      strcpy(menor_nome, nome);
    }
  }
  printf("\nA pessoa mais baixa: %s, com %.2f metros de altura \n", menor_nome, menor_altura);

  system("pause");
  return 0;
}
