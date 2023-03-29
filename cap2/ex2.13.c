// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3;
    float m, t;
    printf("Nota 1: ");
    scanf(" %f", &n1);

    printf("Nota 2: ");
    scanf(" %f", &n2);

    printf("Nota Optativa: ");
    scanf(" %f", &n3);

    if ((n3 >= 0) && (n3 > n2 || n3 > n1)) {
        if (n2 < n1) { n2 = n3; } 
        else {n1 = n3;}
    }

    m = (n1 + n2) / 2;

    printf("Media: %.2f\n", m);
    if (m >= 6) {
        printf("APROVADO");
    } else if (m >= 4 && m < 6) {
        printf("EXAME");
    } else {
        printf("REPROVADO");
    }

    return 0;
}   