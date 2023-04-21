// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int b, s;
    int t = (int) (sizeof(n) / sizeof(n[0]));

    for (int i = 0; i < t; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    printf("Buscar por: ");
    scanf(" %d", &b);
    
    for (int i = 0; i < t; i++) {
        if (n[i] == b) {
            s++;
        }
    }

    if (s == 1) {
        printf("O array contem %d ocorrencia do valor %d.", s, b);
    } else if (s == 0) {
        printf("O array nao contem o valor %d.", b);
    } else {
        printf("O array contem %d ocorrencias do valor %d.", s, b);
    }
    
    return 0;
}