/*
  Função: Retornar o somatorio de todos os numeros de 1 ate N
  Autor: Gabriel Maciel dos Santos
  Data: 22/08/18
*/

#include <stdio.h>

int somatorio(int);
int main(){

  int num;

  do {

    printf("Informe um numero:\n");
    scanf("%d", &num);
    
  } while (num < 0);

  printf("A soma de todos os numeros: %d\n", somatorio(num));
  return 0;
}

int somatorio(int n){

  int i, soma;
  soma = 0;

  for (i = 1; i <= n; i++){
    soma = soma + i;
  }

  return soma;
}
