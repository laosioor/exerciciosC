// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf(" %d", &n[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%03d", n[i][j]);
            if (j != 1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}