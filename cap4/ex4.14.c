// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    int qP = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0) {
            qP++;
            for (int j = i; j < 10-qP; j++) 
            {
                n[j] = n[j+1];
            }
            i = 0;
        }
    }

    for (int i = 0; i < 10-qP; i++)
    {
        printf("array[%d] = %d\n", i, n[i]);
    }
    
    
    return 0;
}