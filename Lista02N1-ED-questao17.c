/*
  Função: Calculo de juros compostos para saber o valor que o capital irá render ao final de N anos
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>
#include <math.h>

double juros_compostos(double, float, int);
int main(){

  double x, valor_final, montante_final;
  float j;
  int n;

  printf("Qual o capital aplicado?\n");
  scanf("%lf", &x);
  printf("Qual porcentagem em juros sera cobrada?\n");
  scanf("%f", &j);
  printf("Tempo em anos da aplicacao?\n");
  scanf("%d", &n);

  valor_final = juros_compostos(x, j, n);
  montante_final = juros_compostos(x, j, n) + x;

  printf("Os juros do capital investido sera: %.2lf\n\n", valor_final);
  printf("O montante final do capital com os juros sera: %.2lf\n", montante_final);

  return 0;
}

double juros_compostos(double capital, float juros, int ano){

  double juros_capital;
  float juros_porcento;

  juros_porcento = juros / 100;

  juros_capital = capital * (pow((1 + juros_porcento), ano));

  return juros_capital;
}
