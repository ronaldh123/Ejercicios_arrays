#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

  int numeros[100];
  double promedio=0;

srand(time(NULL));

for (int i = 0; i < 100; i++) {
 numeros[i]= rand() % 101;
 promedio += numeros[i];
}

printf("%.2f\n", promedio/100);
  return 0;
}