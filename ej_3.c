#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  int n=atoi(argv[1]);
  int m=atoi(argv[2]);
int numeros[n];
srand(time(NULL));
  for (int i = 0; i < n; i++) {
    numeros[i]=rand()%(m+1);
    printf("%d\n",numeros[i] );
  }
  return 0;
}
