// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("N: ");
    scanf(" %d", &n);

    if (n >= 0) {
        for (int i = 0; n >= i; n--) {
            printf("%d ", n);
        }
    }
    else {
        printf("Valor incorreto (negativo)");
    } 
    return 0;
}