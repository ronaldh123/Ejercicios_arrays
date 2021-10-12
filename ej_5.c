#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

  int numeros[100];
  int mayor=-999;
  int menor=999;

srand(time(NULL));

for (int i = 0; i < 100; i++) {
 numeros[i]= rand() % 101;
 if (mayor<numeros[i]) {
  mayor=numeros[i];
 }
if (menor>numeros[i]) {
menor=numeros[i];
}
}
printf("Mayor:%d\n",mayor);
printf("Menor:%d\n",menor );
  return 0;
}
