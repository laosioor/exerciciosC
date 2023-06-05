// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias( const char *str, char c);

int main() {
    char c;

    printf("Caractere: ");
    scanf(" %c", &c);
    getchar();

    while (1) {
        char string[40];

        printf("Frase: ");
        fgets(string, 40, stdin);
        string[strlen(string)-1] = '\0';

        if (!strcmp(string, "fim")) {
            break;
        }

        int oco = contarOcorrencias(string, c);

        printf("\"%s\" tem %d ocorrencia(s) do caractere \'%c\'\n", string, oco, c);
    }

    return 0;
}

int contarOcorrencias( const char *str, char c) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }

    return count;
}