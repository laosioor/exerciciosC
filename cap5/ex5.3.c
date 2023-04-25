// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[3][4];
    int m[3][4];
    int nm;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("array[%d][%d]: ",i,j);
            scanf(" %d", &n[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf(" %d", &nm);

    printf("arrayMult:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            m[i][j] = n[i][j] * nm;
            printf("%03d", m[i][j]);

            if (j == 3)
            {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    
    return 0;
}