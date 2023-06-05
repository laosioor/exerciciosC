// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarOcorrencias( const char *str, char c);

int main() {
    char string[40];
    int oco = 0;

    printf("Frase: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    oco = contarOcorrencias(string, 'a');
    printf("A/a: %d\n", oco);

    oco = contarOcorrencias(string, 'e');
    printf("E/e: %d\n", oco);

    oco = contarOcorrencias(string, 'i');
    printf("I/i: %d\n", oco);

    oco = contarOcorrencias(string, 'o');
    printf("O/o: %d\n", oco);

    oco = contarOcorrencias(string, 'u');
    printf("U/u: %d\n", oco);


    return 0;
}

int contarOcorrencias( const char *str, char c) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c || str[i] == toupper(c)) {
            count++;
        }
    }

    return count;
}