// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

void pInterno( const double *, const double *, double *, int );

int main() {
    double a1[5];
    double a2[5];
    double pi;

    for (int i = 0; i < 5; i++) {
        printf("a1[%d]: ", i);
        scanf(" %lf", &a1[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("a2[%d]: ", i);
        scanf(" %lf", &a2[i]);
    }

    for (int i = 0; i < 5; i++) {
        pInterno( a1, a2, &pi, i);

        printf("\n%.2lf x %.2lf = %.2lf", a1[i], a2[i], pi);
    }
    return 0;
}

void pInterno( const double *a1, const double *a2, double *pi, int n ) {
    *pi = a1[n] * a2[n];
}