// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

void classificaTrinca(int n1, int n2, int n3);

int main() {
    int n1[3];
    int n2[3];
    int n3[3];

    for(int i = 0; i < 3; i++) {
        printf("n1[%d]: ", i);
        scanf(" %d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf(" %d", &n2[i]);

        printf("n3[%d]: ", i);
        scanf(" %d", &n3[i]);
    }

    for(int i = 0; i < 3; i++) {
        classificaTrinca(n1[i], n2[i], n3[i]);
    }
    return 0;
}

void classificaTrinca(int n1, int n2, int n3) {
    printf("\n%d, %d e %d: ", n1, n2, n3);
    int n[3] = {n1, n2, n3};

    if (n1 > n3) {
        int t = n1;
        n1 = n3;
        n3 = t;
    }

    if (n2 > n3) {
        int t = n2;
        n2 = n3;
        n3 = t;
    }

    if (n1 > n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }

    printf("%d <= %d <= %d", n1, n2, n3);
}