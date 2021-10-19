#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *numero[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char carta[100]= "\0";
    for (size_t i = 0; i < 3; i++)
    {
        strcat(carta, numero[rand()%10]);
        strcat(carta, " de ");
        strcat(carta, type[rand()%4]);
        strcat(carta, "\n");
    }
    printf("%s", carta);
    return 0;
}
