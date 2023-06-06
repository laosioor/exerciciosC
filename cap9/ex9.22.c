// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirDireita( const char *str );

int main() {
    char string[40];

    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    imprimirDireita(string);

    return 0;
}

void imprimirDireita( const char *str ) {
    int len = strlen(str);

    for (int i = 0; i < (80 - (len*2)); i++) {
        printf(" ");
    }

    puts(str);
}