/*
  Função: Calcular a difença entre duas horas distintas do mesmo dia
  Autor: Gabriel Maciel dos Santos
  Data: 25/03/18
*/

/*
  hh1: primeira hora
  hh2: segunda hora
  mm1: primeiro minuto
  mm2: segundo minuto
  hh_final: hora final
  mm_final: minuto final
*/

#include <stdio.h>

int diferenca(int, int, int, int);
int main(){

  int hh1, mm1, hh2, mm2, hh_final, mm_final;

  do {

    printf("Qual a primeira hora? Use o padrao (hh:mm)\n");
    scanf("%d:%d", &hh1, &mm1);

  } while (hh1 < 0 || hh1 >= 24 || mm1 < 0 || mm1 >= 60);

  do {

    printf("Qual a segunda hora? Use o padrao (hh:mm)\n");
    scanf("%d:%d", &hh2, &mm2);

  } while (hh1 < 0 || hh1 >= 24 || mm1 < 0 || mm1 >= 60);

  hh_final = diferenca(hh1, mm1, hh2, mm2) / 60;
  mm_final = diferenca(hh1, mm1, hh2, mm2) - (hh_final * 60);

  printf("%d:%d e %d:%d tem o intevalo de: %d:%.2d", hh1, mm1, hh2, mm2, hh_final, mm_final);

  return 0;
}

int diferenca(int h1, int m1, int h2, int m2){

  int min1, min2, result;

  min1 = (h1 * 60) + m1;
  min2 = (h2 * 60) + m2;

  if (min2 > min1){
    result = min2 - min1;
  } else {
    result = min1 - min2;
  }

  return result;
}
