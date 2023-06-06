// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa( const char *str );

int main() {
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("\n");

    imprimirCaixa(string);

    return 0;
}

void imprimirCaixa( const char *str ) {
    int len = strlen(str);

    for (int i = 0; i < 2; i++)
    {
        printf("++");
        for (int i = 0; i < len+2; i++) {
            printf("=");
        }
        printf("++");

        if (i == 1) {
            break;
        }

        printf("\n|| %s ||\n", str);
    }
}