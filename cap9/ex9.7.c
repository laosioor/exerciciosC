// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char strings[10][40];
    int pos = 0;
    int comp = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Par %d, palavra %d: ", i+1, j+1);
            fgets(strings[pos], 40, stdin);
            strings[pos][strlen(strings[pos])-1] = '\0';
            pos++;
        }
    }

    printf("\n");

    pos = 0;

    for (int i = 0; i < 5; i++) {
        printf("%s - %s: ", strings[pos], strings[pos+1]);

        comp = strcmp(strings[pos], strings[pos+1]);

        if (comp < 0) {
            printf("ORDEM CRESCENTE\n");
        } else if (comp > 0) {
            printf("ORDEM DECRESCENTE\n");
        } else {
            printf("IGUAIS\n");
        }

        pos+=2;
    }

    return 0;
}