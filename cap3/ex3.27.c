// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float p;
    float s = 0, maior = 0; 
    int q = 0, qs = 0;

    while (1) {
        printf("Entre com o peso da pessoa %02d: ", q+1);
        scanf(" %f", &p);

        if (p < 0) {
            break;
        }

        if (q == 0 || p > maior) {
            maior = p;
        }

        if (p > 60) {
            s += p;
            qs++;
        }

        q++;
    }

    float m = s > 0 ? s / qs : 0;

    printf("Media dos pesos acima de 60kg: %.2f\n", m);

    printf("A pessoa mais pesada possui %.2fkg", maior);

    return 0;
}