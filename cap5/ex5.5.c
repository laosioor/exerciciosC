// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[3][3];
    int det;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d]: ",i,j);
            scanf(" %d", &n[i][j]);
        }
    }

    det = n[0][0] * n[1][1] * n[2][2] + n[0][1] * n[1][2] * n[2][0] + n[0][2] * n[1][0] * n[2][1] - (n[0][2] * n[1][1] * n[2][0] + n[0][0] * n[1][2] * n[2][1] + n[0][1] * n[1][0] * n[2][2]);

    printf("Determinante: %d", det);
    
    return 0;
}