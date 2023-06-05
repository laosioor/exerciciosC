// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[41];

    printf("String: ");
    fgets(string, 41, stdin);

    string[strlen(string)-1] = '\0';

    printf("Primeiro caractere: %c\n", string[0]);
    printf("Ultimo caractere: %c\n", string[strlen(string)-1]);
    printf("Numero de caracteres: %d", strlen(string));
    return 0;
}