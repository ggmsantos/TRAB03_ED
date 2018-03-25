/*
  Função: Retornar o somatorio de um numero N
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
  Observações: Normalmente se usa laço for, para variar a questao estara feita em while
*/

#include <stdio.h>

int somatorio(int);
int main(){

  int n;

  do {

    printf("Informe um numero:\n");
    scanf("%d", &n);

  } while (n <= 0);

  printf("O somatario de todos os numeros: %d\n", somatorio(n));

  return 0;
}

int somatorio(int num){

  int i, soma;
  i = 1;
  soma = 0;

  while (i <= num){
    soma = (soma + i);
    i++;
  }

  return soma;
}
