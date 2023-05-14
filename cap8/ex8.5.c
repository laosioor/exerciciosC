// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int buscar( const int a[], int, int );

int main() {
    int a[10];
    int chave;

    for(int i = 0; i < 10; i++) {
        printf("a[%d]: ", i);
        scanf(" %d", &a[i]);
    }

    printf("Buscar por: ");
    scanf(" %d", &chave);
    
    printf("O valor %d ", chave);
    if (buscar(a, 10, chave) >= 1) {
        printf("foi encontrado na posicao %d.", buscar(a, 10, chave));
    } else {
        printf("nao foi encontrado.");
    }

    return 0;
}

int buscar( const int a[], int n, int chave ) {
    for (int i = 0; i < n; i++) {
        if (a[i] == chave) {
            return i;
        }
    }

    return -1;
}