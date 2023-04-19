// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1[5];
    int n2[5];
    int n3[5];
    int q = 0;

    printf("Forneca os valores do primeiro array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\tarray1[%d]: ", i);
        scanf(" %d", &n1[i]);
    }

    printf("Forneca os valores do segundo array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\tarray2[%d]: ", i);
        scanf(" %d", &n2[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (n1[i] == n2[j]) {
                for (int k = 0; k < 5; k++)
                {
                    if (n3[k] != n1[i]) {
                        n3[q] = n1[i];
                        q++;
                        break;
                    } else {
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        printf("arrayInterseccao[%d] = %d\n", i, n3[i]);
    }

    return 0;
}