// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter( char *destino, const char *origem );

int main() {
    char string[40];
    char destStr[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    inverter(destStr, string);

    printf("Invertida: %s", destStr);

    return 0;
}

void inverter( char *destino, const char *origem ) {
    for (int i = 0; i < strlen(origem); i++) {
        destino[i] = origem[strlen(origem) - (i+1)];
    }
    destino[strlen(destino)-1] = '\0';
}