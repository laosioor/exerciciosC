// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalavras( const char *str );

int main() {
    char string[40];
    int cont = 0;

    printf("Frase: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    cont = contarPalavras(string);

    printf("Quantidade de palavras: %d", cont);

    return 0;
}

int contarPalavras( const char *str ) {
    int c = 1;


    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            c++;
        }
    }

    return c;
}