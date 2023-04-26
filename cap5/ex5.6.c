// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[2][3];
    int mt[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d]: ",i,j);
            scanf(" %d", &m[i][j]);
        }       
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mt[i][j] = m[j][i];
        }
    }

    printf("M:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%03d",m[i][j]);

            if (j != 2) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    printf("\nMt:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%03d",mt[i][j]);

            if (j != 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
    
    return 0;
}