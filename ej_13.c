#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int inputMonth= atoi(argv[1]);
    if (inputMonth < 1 || inputMonth > 12)
    {
        printf("error no es un mes del año");
        return 0;
    }

    time_t t= time(NULL);
    struct tm time= *localtime(&t);
    char* months[]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    printf("%s de %d", months[inputMonth-1], time.tm_year+1900);
    return 0;
}
