// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, y;

    printf("Primeiro angulo: ");
    scanf(" %f", &a);
    
    printf("Segundo angulo: ");
    scanf(" %f", &b);

    printf("Terceiro angulo: ");
    scanf(" %f", &y);

    if (a + b + y != 180) {
        printf("Nao e um triangulo :(");
    } else {    
        if (a == 90 || b == 90 || y == 90) {
            printf("Triangulo retangulo");
        }

        else if (a > 90 || b > 90 || y > 90) {
            printf("Triangulo obtsuangulo");
        }

        else if (a < 90 && b < 90 && y < 90) {
            printf("Triangulo acutangulo");
        }
    }
    
    
    return 0;
}