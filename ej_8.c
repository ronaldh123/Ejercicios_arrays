#include <stdio.h>
#include <stdlib.h>

int main(void) {
int numeros[6]={1,2,3,4,5,6};

for (int i = 0; i < 6; i++) {
printf("%d",numeros[i] );
}
printf("\n");
for (int i = 5; i >= 0; i--) {
  printf("%d",numeros[i] );
}
printf("\n" );
return 0;
}