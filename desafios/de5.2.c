// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c;

    printf("Linhas: ");
    scanf(" %d", &l);  

    printf("Colunas: ");
    scanf(" %d", &c);
    
    if (l < 2 || l > 10 || c < 1 || c > 10) {
        printf("Nao e possivel calcular determinante!");
    } else {
        int m[l][c];

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                printf("M[%d][%d]: ", i, j);
                scanf(" %d", &m[i][j]);
            }
        }

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                printf("M[%d][%d] = %d\n", i, j, m[i][j]);
            }
        }
    }
    
    return 0;
}