#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 int n=atoi(argv[1]);

 int vector1[n];
 int vector2[n];
 int producto_punto=0;
 for (int i = 0; i < n; i++) {
 vector1[i]=i+1;
 vector2[i]=i+1;
 producto_punto +=vector1[i]*vector2[i];
  }
printf("%d\n",producto_punto );
  return 0;
}