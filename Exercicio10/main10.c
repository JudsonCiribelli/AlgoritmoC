#include <stdio.h>
#include <stdlib.h>

/*3. Um cinema que possui capacidade de 20 lugares está sempre lotado. Certo dia cada espectador
respondeu a um questionário, onde constava:
• sua idade;
• sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou
péssimo.
Elabore um programa que, recebendo estes dados calcule e mostre:
• a quantidade de respostas ótimo;
• a diferença percentual entre respostas bom e regular;
• a média de idade das pessoas que responderam ruim;
• a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
• a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que
respondeu ruim*/

int main()
{

  int otimo = 0;
  int bom = 0;
  int regular = 0;
  int ruim = 0;
  int pessimo = 0;
  int respostas = 0;
  int soma_idade = 0;
  int Maior_idade_pessimo = 0;
  int Maior_idade_otimo = 0;
  int Maior_idade_ruim = 0;

  for (int i = 1; i <= 20; i++)
  {
    int idade;
    char opiniao[80];

    printf("Resposta do cliente: %d \n", i);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Opiniao do filme (OTIMO,BOM,REGULAR,RUIM,PESSIMO)");
    gets(opiniao);

    if (strcmp(opiniao, "otimo") == 0)
    {
      otimo++;
      if (idade > Maior_idade_otimo)
      {
        Maior_idade_otimo = idade;
      }
      else if (strcmp(opiniao, "bom") == 0)
      {
        bom++;
      }
      else if (strcmp(opiniao, "regular") == 0)
      {
        regular++;
      }
      else if (strcmp(opiniao, "ruim") == 0)
      {
        ruim++;
        soma_idade += idade;
        if (idade > Maior_idade_ruim)
          Maior_idade_ruim = idade;
      }
      else if (strcmp(opiniao, "pessimo") == 0)
      {
        pessimo++;
        if (idade > Maior_idade_pessimo)
          Maior_idade_pessimo = idade;
      }
      respostas++;
    }
  }
  float diferencaBomeRegular = (bom - regular) * 100.0 / respostas;
  float Idaderuim = (float)soma_idade / ruim;
  float Ppessimo = pessimo * 100.0 / respostas;
  int diferencaIdadeOtimoeRuim = Maior_idade_otimo - Maior_idade_ruim;

  printf("\nResultado:\n");
  printf("Respostas 'otimo': %d \n", otimo);
  printf("Diferenca percentual entre respostas 'bom' e 'regular': %.2f\n", diferencaBomeRegular);
  printf("Media de idade das pessoas que responderam 'ruim': %.2f\n", Idaderuim);
  printf("Porcentagem de respostas 'pessimo': %.2f\n", Ppessimo);
  printf("Diferenca de idade entre a maior idade que respondeu 'otimo' e a maior idade que respondeu 'ruim': %d\n", diferencaIdadeOtimoeRuim);

  system("pause");
  return 0;
}
