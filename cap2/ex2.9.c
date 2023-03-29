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
        printf(" de perimetro %.2f", l * m);
    } else if (l == 4) {
        printf("QUADRADO");
        printf(" de area %.2f", m * m);
    } else if (l == 5) {
        printf("PENTAGONO");
    } else {
        printf("Poligono nao identificado");
    }
    
    return 0;
}