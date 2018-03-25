/*
  Função: Uma funcao cubo que retorna o valor de um numero
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>
#include <math.h>

int cubo(int); //funcao do cubo
int main(){

  int num, resultado;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  resultado = cubo(num); //armazenando os dados da funcao na variavel resultado

  printf("O numero %d ao cubo fica: %d\n", num, resultado);

  return 0;
}

int cubo(int x){
  int n;

  n = (x * x * x); //formula de num ao cubo sem usar a funcao pow

  return n;
}
