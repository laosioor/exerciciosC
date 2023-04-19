// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        n[i] = n[i+1];
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("array[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}