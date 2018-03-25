/*
  Função: ler um angulo em graus e convertê-lo para radianos
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>

float grau_radianos(float);
int main(){

  float angulo;

  printf("Informe o valor em graus:\n");
  scanf("%f", &angulo);

  printf("O valor de %.2f em radianos e: %.4f\n", angulo, grau_radianos(angulo));
  return 0;
}

float grau_radianos(float ang){

  float pi, radiano;
  pi = 3.14159265;

  radiano = (ang * pi) / 180;

  return radiano;
}
