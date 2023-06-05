// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void tornarMinuscula( char *str );

int main() {
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    tornarMinuscula(string);

    puts(string);

    return 0;
}


void tornarMinuscula( char *str ) {
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}