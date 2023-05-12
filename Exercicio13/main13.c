#include <stdio.h>
#include <stdlib.h>

/*Um método para calcular raiz aproximada:
a) Comece testando um g qualquer
b) Se gg* está perto suficientemente de x,
c) então g é uma boa aproximação da raiz quadrada de x. Fim do algoritmo.
d) Senão crie uma novo g que é a média g e x/g, Ou seja, g = (g + x / g) / 2
e) Com o novo g, volte ao passo 2*/
double calcularRaizAproximada(double x, double precisao)
{
  double g = x;      // Começa com um valor inicial g qualquer
  double gg = g * g; // Quadrado de g

  while (fabs(gg - x) > precisao)
  {
    g = (g + x / g) / 2; // Cria um novo g baseado na média de g e x/g
    gg = g * g;          // Atualiza o quadrado de g
  }

  return g;
}
int main()
{
  double x;
  printf("Digite o número para calcular a raiz aproximada: ");
  scanf("%lf", &x);

  double precisao;
  printf("Digite a precisão desejada: ");
  scanf("%lf", &precisao);

  double raizAproximada = calcularRaizAproximada(x, precisao);

  printf("A raiz aproximada de %.2f é %.5f\n", x, raizAproximada);

  system("pause");
  return 0;
}
