// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char strings[3][40];
    char s[40];
    int comp = 0;

    for (int i = 0; i < 3; i++) {
        printf("String %d: ", i+1);
        fgets(strings[i], 40, stdin);
        strings[i][strlen(strings[i])-1] = '\0';
    }

    comp = strcmp(strings[0], strings[1]);

    if (comp > 0) {
        strcpy(s, strings[0]);
        strcpy(strings[0], strings[1]);
        strcpy(strings[1], s);
    }

    comp = strcmp(strings[0], strings[2]);

    if (comp > 0) {
        strcpy(s, strings[0]);
        strcpy(strings[0], strings[2]);
        strcpy(strings[2], s);
    }

    comp = strcmp(strings[1], strings[2]);

    if (comp > 0) {
        strcpy(s, strings[1]);
        strcpy(strings[1], strings[2]);
        strcpy(strings[2], s);
    }

    printf("%s, %s e %s\n", strings[0], strings[1], strings[2]);

    return 0;
}