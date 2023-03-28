// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int l;
    float m;
    
    printf("Quantidade de Lados: ");
    scanf(" %d", &l);
    
    printf("Medida dos Lados: ");
    scanf(" %f", &m);

    if (l == 3) {
        printf("TRIANGULO");
        printf("Perimetro: %.2f", l * m);
    } else if (l == 4) {
        printf("QUADRADO");
        printf("Perimetro: %.2f", m * m);
    } else if (l == 5) {
        printf("PENTAGONO");
    } else {
        printf("POLIGONO NAO IDENTIFICADO");
    }
    
    return 0;
}