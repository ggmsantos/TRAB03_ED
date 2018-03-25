/*
  Função: Função pra calcular o número de arranjos de n objetos diferentes onde r objetos são escolhidos de cada vez
  Autor: Gabriel Maciel dos Santos
  Data: 22/03/18
*/

#include <stdio.h>

double fat(int num);
double arranjos(int n, int p);

int main(){
  int n, p;

  printf("Digite os valores de n e p:\n");
  scanf("%d %d", &n, &p);

  printf("Arranjos(%d, %d) = %g\n", n, p, arranjos(n, p));
  getchar();

  return 0;
}

double fat(int num){
  double fatorial;
  int i;

  fatorial = 1;

  for (i = 1; i <= num; i++){
    fatorial = fatorial * i;
  }

  return fatorial;
}

double arranjos(int n, int p){
  double resposta;

  resposta = fat(n) / (fat(n - p));

  return resposta;
}
