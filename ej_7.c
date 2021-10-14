#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

srand(time(NULL));
int numeros[100];

int cantidad0=0;
int cantidad1=0;
int cantidad2=0;
int cantidad3=0;
int cantidad4=0;
int cantidad5=0;
int cantidad6=0;
int cantidad7=0;
int cantidad8=0;
int cantidad9=0;

for (int i = 0; i < 100; i++) {
numeros[i]=rand()%10;

if (numeros[i]==0) {
cantidad0+=1;
}

if (numeros[i]==1) {
cantidad1+=1;
}

if (numeros[i]==2) {
cantidad2+=1;
}

if (numeros[i]==3) {
cantidad3+=1;
}

if (numeros[i]==4) {
cantidad4+=1;
}

if (numeros[i]==5) {
cantidad5+=1;
}

if (numeros[i]==6) {
cantidad6+=1;
}

if (numeros[i]==7) {
cantidad7+=1;
}

if (numeros[i]==8) {
cantidad8+=1;
}

if (numeros[i]==9) {
cantidad9+=1;
}

}
printf("Cantidad de 0=%d\nCantidad de 1=%d\nCantidad de 2=%d\nCantidad de 3=%d\nCantidad de 4=%d\nCantidad de 5=%d\nCantidad de 6=%d\nCantidad de 7=%d\nCantidad de 8=%d\nCantidad de 9=%d\n",cantidad0,cantidad1,cantidad2,cantidad3,cantidad4,cantidad5,cantidad6,cantidad7,cantidad8,cantidad9 );
return 0;
}