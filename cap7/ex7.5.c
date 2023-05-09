// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int ehPar(int n) {
    return (n % 2 == 0);
}

int ehDivisivel(int dividendo, int divisor) {
    return (dividendo % divisor == 0);
}

int main() {
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++) {
        printf("n1[%d]: ", i);
        scanf(" %d", &n1[i]);
        
        printf("n2[%d]: ", i);
        scanf(" %d", &n2[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", n1[i]);

        if (ehPar(n1[i])) {
            printf("eh par e ");
        } else {
            printf("eh impar e ");
        }

        printf("%d ", n1[i]);

        if (ehDivisivel(n1[i], n2[i])) {
            printf("eh divisivel por %d\n", n2[i]);
        } else {
            printf("nao eh divisivel por %d\n", n2[i]);
        }
    }
    return 0;
}