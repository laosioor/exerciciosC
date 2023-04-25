// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d]: ",i,j);
            scanf(" %d", &n[i][j]);
        }
    }

    
    
    return 0;
}