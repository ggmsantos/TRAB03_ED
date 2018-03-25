/*
  Função: Calcular a velocidade media em Km/h de um percuso
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/11
*/

#include <stdio.h>

float calcula_vm(float, float);
int main(){

  float a, b;

  do {

    printf("Digite a distancia a ser percorrida em Km/h:\n");
    scanf("%f", &a);
    printf("Tempo para percorrer essa distancia?\n");
    scanf("%f", &b);

  } while (a <= 0 || b <= 0);

  printf("A velocidade media sera %.2f Km/h\n", calcula_vm(a, b));

  return 0;
}

float calcula_vm(float espaco, float tempo){

  float vmedia;

  vmedia = (espaco / tempo);

  return vmedia;
}
