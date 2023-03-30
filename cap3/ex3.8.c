// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("N: ");
    scanf(" %d", &n);

    if (n <= 0) {
        for (int i = 0; i >= n; i--) {
            printf("%d ", i);
        }
    }
    else {
        printf("Valor incorreto (positivo)");
    } 

    return 0;
}