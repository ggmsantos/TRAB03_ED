/*
  Função: Retornar o produtorio de um numero N, multiplicacao de 1 ate N
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
  Observações: A função esta sendo declarada para numeros inteiros, porem valores como 15 ultrapassam a capacidade
  de int, então recomendo usar float para valor maiores, como 15
*/

#include <stdio.h>

int produtorio(int);
int main(){

  int num;

  do {

    printf("Informe um numero:\n");
    scanf("%d", &num);

  } while (num <= 0);

  printf("O produto de todos os numeros: %d\n", produtorio(num));

  return 0;
}

int produtorio(int n){

  int prod, i;
  prod = 1;

  for (i = 1; i <= n; i++){
    prod = (prod * i);
  }

  return prod;
}
