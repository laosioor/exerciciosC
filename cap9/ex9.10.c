// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho( const char *str );

int main() {
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("%d caractere(s)!", tamanho(string));

    return 0;
}

int tamanho( const char *str ) {
    int tam = 0;

    while (str[tam])
    {
        tam++;
    }
    

    return tam;
}