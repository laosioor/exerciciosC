// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    int t, s = 0;

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
        s += i;
    }

    printf("Somatorio entre %d e %d: %d", n1, n2, s);
    return 0;
}