/*
  Função: Uma funcao cubo e quadrado
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>

//funcoes para calculo de num, ao quadrado e ao cubo
int quadrado(int);
int cubo(int);

int main(){

  int num, res_quad, res_cubo;

  printf("Digite um numero para ser calculado o seu quadrado e cubo:\n");
  scanf("%d", &num);

  res_quad = quadrado(num); //recebendo a funcao quadrado
  res_cubo = cubo(num); //recebendo a funcao cubo

  printf("O valor ao quadrado: %d\nO valor ao cubo: %d\n", res_quad, res_cubo);

  return 0;
}

int quadrado(int x){

  int quad;
  quad = (x * x);

  return quad;
}

int cubo(int x){

  int cubo;
  cubo = (x * x * x);

  return cubo;
}
