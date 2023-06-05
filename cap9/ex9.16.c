// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void removerLetra( char *str, char c );

int main() {
    char string[40];
    char c;

    printf("Frase: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("Caractere: ");
    scanf(" %c", c);

    removerLetra(string, c);

    puts(string);

    return 0;
}

void removerLetra( char *str, char c ) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c || str[i] == toupper(c)) {
            str[i] = 0;
        }
    }
}