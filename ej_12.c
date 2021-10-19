#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    bool isPalindrome= true;
    size_t arg1Length= strlen(argv[1]);
    for (size_t i = 0; i < arg1Length; i++)
    {
        if (argv[1][i] != argv[1][(arg1Length-1)-i]) {
            isPalindrome= false;
            break;
        }
    }
    printf("%s", isPalindrome ? "Es palindromo" : "No es palindromo");
    return 0;
}
