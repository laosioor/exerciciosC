// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    int t, c2 = 0, c3 = 0, c4 = 0;

    printf("N1: ");
    scanf(" %d", &n1);
    
    printf("N2: ");
    scanf(" %d", &n2);
    
    if (n1 > n2) {
        t = n2;
        n2 = n1;
        n1 = t;
    } 

    for (int i = n1; i <= n2; i++) {
        if (i % 4 == 0) {
            c4++;
        } if (i % 3 == 0) {
            c3++;
        } if (i % 2 == 0) {
            c2++;
        }
    }

    printf("Multiplos de 2: %d\nMultiplos de 3: %d\nMultiplos de 4: %d", c2, c3, c4);
    return 0;
}