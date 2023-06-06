// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void substring( char *recorte, const char *origem, int inicio, int fim );

int main() {
    char string[40];
    char recorte[40];
    int ini = 0;
    int fim = 0;

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("Inicio: ");
    scanf(" %d", &ini);

    printf("Fim: ");
    scanf(" %d", &fim);
    
    substring(recorte, string, ini, fim);

    printf("Recorte: %s", recorte);

    return 0;
}

void substring( char *recorte, const char *origem, int inicio, int fim ) {
    int cont = 0;

    if (fim <= inicio || inicio >= strlen(origem)-1) {
        strcpy(recorte, origem);
        return;
    }

    for (int i = inicio; i < fim; i++) {
        recorte[cont] = origem[i];
        cont++;
    }
}