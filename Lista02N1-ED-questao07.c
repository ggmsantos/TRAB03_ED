/*
  Função: Calcular a area da esfera, considerando que pi sera: 3,141592
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>
#include <math.h>

float area_esfera(float r);
int main(){

  float raio, resultado;

  printf("Informe o valor do raio:\n");
  scanf("%f", &raio);

  resultado = area_esfera(raio);

  printf("O valor da area da esfera: %f\n", resultado);

  return 0;
}

float area_esfera(float r){

  float pi, area;
  pi = 3.141592;

  area = (4 * pi * (pow(r, 2)));

  return area;
}
