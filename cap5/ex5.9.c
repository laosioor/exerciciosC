// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int a[100][100] = {0};
    int q = 0, v = 1;

    printf("Numero entre 1 e 100: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Numero incorreto!\n");
        n = 0;
    }

    for (int i = 0; i < n; i++) // primeiro for pra fazer em ordem crescente
    {
        for (int j = q; j < n; j++)
        {
            a[i][j] = j+1-q;
        }
        q++;
    }

    for (int i = 1; i < n; i++) // segundo for pra fazer em ordem decrescente
    {
        int v = i + 1;
        for (int j = 0; j < q-n+1; j++)
        { 
            a[i][j] = v;
            v--;
        }
        q++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);

            if (j != n-1)
            {
                printf(" ");
            } else
            {
                printf("\n");
            }
        }
        
    }
    
    return 0;
}