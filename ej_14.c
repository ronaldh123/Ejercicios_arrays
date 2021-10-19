#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *number[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char *deck[40];
    int deckIndex= 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++) {
          char card[100] = "";
          strcat(card, number[j]);
          strcat(card, " de ");
          strcat(card, type[i]);
          strcat(card, "\n");
          printf("%s\n", card);
          deck[(i*10) + j]= card;
          deckIndex++;
        }
    }
    for (int i = 0; i < 40; i++)
    {
        // printf("%s\n", deck[i]);
    }
    return 0;
}
