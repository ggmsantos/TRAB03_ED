/*
  Função: Saber se um numero é primo ou não
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>

int num_primo(int);
int main(){

  int num;

  do {

    printf("Informe um numero que seja inteiro e positivo:\n");
    scanf("%d", &num);

  } while (num <= 0);

  printf("%d", num_primo(num));

  return 0;
}

int num_primo(int x){
  int i, y, p;
  y = 0;

  for (i = 1; i <= x; i++){
    if (x % i == 0){
      y++;
    } else {
      p = 0;
    }
  }

  if (y == 2){
    p = 1;
  } else {
    p = 0;
  }

  return p;
}
