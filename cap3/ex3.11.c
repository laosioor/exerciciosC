// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("N1: ");
    scanf(" %d", &n1);
    
    printf("N2: ");
    scanf(" %d", &n2);
    
    if (n1 > n2) {
        for (n1; n1 >= n2; n1--) {
            printf("%d ", n1);
        }
    }
    else {
        for (n1; n1 <= n2; n1++) {
            printf("%d ", n1);
        }
    }

    
    return 0;
}