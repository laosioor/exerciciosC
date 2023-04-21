// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int ind[5];
    int b, s = 0;
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
            ind[i] = i;
            s++;
        }
    }

    switch(s) {
        case 0:
            printf("O array nao contem o valor %d.", b);
            break;
        case 1:
            printf("O valor %d foi encontrado no indice %d do array.", b, ind[0]);
            break;
        case 2:
            printf("O valor %d foi encontrado nos indices %d e %d do array.", b, ind[0], ind[1]);
            break;
        case 3:
            printf("O valor %d foi encontrado nos indices %d, %d e %d do array.", b, ind[0], ind[1], ind[2]);
            break;
        case 4:
            printf("O valor %d foi encontrado nos indices %d, %d, %d e %d do array.", b, ind[0], ind[1], ind[2], ind[3]);
            break;
        case 5:
            printf("O valor %d foi encontrado nos indices %d, %d, %d, %d e %d do array.", b, ind[0], ind[1], ind[2], ind[3], ind[4]);
            break;
    }

    return 0;
}