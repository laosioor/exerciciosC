// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    int p[10], im[10];
    int qP = 0, qI = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (n[j] > n[i]) {
                int t = n[j];
                n[j] = n[i];
                n[i] = t;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0) {
            p[qP] = n[i];
            qP++;
        } else
        {
            im[qI] = n[i];
            qI++;
        }
    }
    

    printf("Valores pares em ordem crescente: ");
    if (qP == 0) {
        printf("nao ha.\n");
    } else {
        for (int i = 0; i < qP; i++)
        {
            if (i < qP - 1) {
                printf("%d ", p[i]);
            } else {
                printf("%d.\n", p[i]);
            }
        }
    }

    printf("Valores impares em ordem decrescente: ");
    if (qI == 0) {
        printf("nao ha.");
    } else {
        for (int i = qI-1; i >= 0; i--)
        {
            if (i > 0) {
                printf("%d ", im[i]);
            } else {
                printf("%d.", im[i]);
            }
        }
        
    }

    return 0;
}