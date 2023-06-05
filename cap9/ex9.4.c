// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[41];

    printf("String: ");
    fgets(string, 41, stdin);

    string[strlen(string)-1] = '\0';

    for (int i = 0; i < strlen(string); i++) {
        if (i % 2 == 0) {
            continue;
        }

        // impar
        if (string[i] != ' '){ 
            printf("%c", string[i]);
        } else {
            printf("\' \'");
        }

        if (i < strlen(string)-2) {
            printf(", ");
        }
    }
    return 0;
}