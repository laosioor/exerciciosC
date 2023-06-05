// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMaiuscula( char *str );

int main() {
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    tornarMaiuscula(string);

    puts(string);

    return 0;
}

void tornarMaiuscula( char *str ) {
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}