#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int, int *, int *, int *);

int main() { 
  int totalSeg = 0;
  int seg = 0;
  int horas = 0;
  int minutos = 0;

  //printf("Total de segundos: ");
  scanf(" %d", &totalSeg);

  decompoeTempo(totalSeg, &horas, &minutos, &seg);
  
  printf("%d segundo(s) corresponde(m) a:\n", totalSeg);
  printf("    %d hora(s)\n", horas);
  printf("    %d minuto(s)\n", minutos);
  printf("    %d segundo(s)", seg);
  
  return 0;
}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg) {
  // diminuir os segundos em minutos, e ir diminuindo até nao ser mais divisivel por 60
  *horas = totalSeg/60;
  *minutos = totalSeg/60;
  *seg = totalSeg%60;

  while (*horas >= 60) {
    *horas /= 60;
  }

  while(*minutos >= 60) {
    *minutos -= 60;
  }
}
