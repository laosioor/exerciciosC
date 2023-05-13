// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

void somatorioMedia( float a[], int n, float *somatorio, float *media ){
    for (int i = 0; i < n; i++) {
        *somatorio = *somatorio + a[i];
    }

    *media = *somatorio / n;
}

int main() {
    float arrayD[10];
    float soma = 0;
    float mediaArit;

    for(int i = 0; i < 10; i++) {
        printf("n[%d]: ", i);
        scanf(" %f", &arrayD[i]);
    }

    somatorioMedia(arrayD, 10, &soma, &mediaArit);

    printf("\nSomatorio: %.2f\n", soma);
    printf("Media: %.2f\n", mediaArit);

    return 0;
}