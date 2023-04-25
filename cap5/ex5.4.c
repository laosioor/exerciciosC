// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[2][2];
    int det;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf(" %d", &n[i][j]);
        }
    }

    det = n[0][0] * n[1][1] - (n[0][1] * n[1][0]);
    
    printf("Determinante: %d", det);
    return 0;
}