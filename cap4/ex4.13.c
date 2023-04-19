// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    int v;
    
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    while (1)
    {
        
        printf("Posicao a ser removida (0 a 9): ");
        scanf(" %d", &v);
        
        if (v < 0 || v > 9) {
            printf("Posicao invalida, forneca novamente!\n");
        }
        else {
            break;
        }
    }

    for (int i = v; i < 10; i++)
    {
        n[i] = n[i+1];
    }
    
    for (int i = 0; i < 9; i++)
    {
        printf("array[%d] = %d\n", i, n[i]);
    }
    
    
    return 0;
}