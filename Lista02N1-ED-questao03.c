/*
  Função: Uma funcao que retorna o valor do produto notavel ao cubo da soma de dois termos, x e y
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>
#include <math.h>

int produto_notavel(int, int);
int main(){

  int a, b, resultado;

  printf("Informe dois numeros:\n");
  scanf("%d %d", &a, &b);

  resultado = produto_notavel(a, b);

  printf("O cubo do produto notavel e: %d", resultado);

  return 0;
}

int produto_notavel(int x, int y){

  int soma;

  soma = (pow(x,3) + (3 * (pow(x, 2)) * y) + (3 * (pow(x, 2)) * y) + pow(y,3));

  return soma;
}
