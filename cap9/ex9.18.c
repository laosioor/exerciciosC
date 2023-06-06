// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromo( const char *str );

int main() {
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';


    printf("\"%s\" %s um palindromo!", string, ehPalindromo(string) ? "eh" : "nao eh");

    return 0;
}

bool ehPalindromo( const char *str ) {
    char rts[40];
    for (int i = 0; i < strlen(str); i++) {
        rts[i] = str[strlen(str) - (i+1)];
    }
    
    if (!strcmp(str, rts)) {
        return 1;
    } else {
        return 0;
    }
}