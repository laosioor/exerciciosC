// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo();

int ehTriangulo(int ladoA, int ladoB, int ladoC);

int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int main() {
    int la[5];
    int lb[5];
    int lc[5];

    for (int i = 0; i < 5; i++) {
        printf("LadoA[%d]: ", i);
        la[i] = lePositivo();

        printf("LadoB[%d]: ", i);
        lb[i] = lePositivo();

        printf("LadoC[%d]: ", i);
        lc[i] = lePositivo();
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Valores %d, %d e %d: ", la[i], lb[i], lc[i]);

        if (!ehTriangulo(la[i], lb[i], lc[i])) {
            printf("nao formam um triangulo\n");
        } else {
            printf("triangulo ");
            
            switch (tipoTriangulo(la[i], lb[i], lc[i])) {
                case 1:
                    printf("equilatero\n");
                    break;
                case 2:
                    printf("isosceles\n");
                    break;
                case 3:
                    printf("escaleno\n");
                    break;
            }
        }
    }
    return 0;
}

int lePositivo() {
    int n;

    do {
        scanf(" %d", &n);

        if (n <= 0) {
            printf("Entre com um valor positivo: ");
        }
    } while (n <= 0);

    return n;
}

int ehTriangulo(int ladoA, int ladoB, int ladoC) {
    int r = 0;

    if (abs(ladoA-ladoB) < ladoC && ladoC < ladoA + ladoB) {
        r = 1;
    } else if (abs(ladoA-ladoC) < ladoB && ladoB < ladoA + ladoC) {
        r = 1;
    } else if (abs(ladoB-ladoC) < ladoA && ladoA < ladoB+ladoC) {
        r = 1;
    } else {
        r = 0;
    }

    return r;
}

int tipoTriangulo(int ladoA, int ladoB, int ladoC) {
    int r = 0;
    if (ladoA == ladoB && ladoB == ladoC) {
        r = 1;
    }
    else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA) {
        r = 3;
    } else {
        r = 2;
    }

    return r;
}